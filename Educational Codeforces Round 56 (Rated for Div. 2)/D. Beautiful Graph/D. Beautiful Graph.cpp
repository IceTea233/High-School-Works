#include<cstdio>
#include<vector>
#include<cstring>
#include<cmath>

#define MOD 998244353

using namespace std;

void DFS(int);
long long int powi(long long int n,long long int m);

vector<int> adj[300007];
int color[300007];
long long int counti[300007][3];
long long int second[300007];
int flag;
int c1,c2;

int main()
{
    int i,j;
    int idx;
    int T,t;
    int n,m;

    scanf("%d",&T);

    for(t=0;t<T;t++)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<=n;i++)
        {
            adj[i].clear();
        }

        for(i=0;i<m;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        flag=1;
//        memset(counti,0,sizeof(counti));
        memset(color,0,sizeof(int)*(n+7));
        idx=0;
        for(i=1;i<=n;i++)
        {
            if(color[i]==0)
            {
                color[i]=1;
                c1=1;
                c2=0;
                DFS(i);
                if(flag)
                {
//                    printf("X>>>%d,%d\n",c1,c2);
                    counti[idx][1]=c1;
                    counti[idx][2]=c2;
                    idx++;
                }
                else
                {
//                    printf("XXX\n");
                    break;
                }
            }
        }
        if(!flag)
        {
            printf("0\n");
            continue;
        }
        //memset(second,0,sizeof(second));
        for(i=0;i<idx;i++)
        {
            long long int a=1,b=1;
            long long int sum=0;

            a=powi(2,counti[i][1]);
//            b=counti[i][2];
//            printf(">>>%I64d %I64d\n",a,b);
            sum+=a%MOD;
            sum%=MOD;
//            for(j=0;j<counti[i][2];j++)
//            {
//                a*=2;
//            }
//            b=counti[i][1];
            a=powi(2,counti[i][2]);
            sum+=a%MOD;
            sum%=MOD;
            second[i]=sum;
        }
        if(!flag)
            printf("0\n");
        else
        {
            long long int ans=1;
            for(i=0;i<idx;i++)
            {
                ans*=second[i];
                ans%=MOD;
            }
            printf("%I64d\n",ans);
        }
    }

	return 0;
}

long long int powi(long long int n,long long int m)
{
    if(m==0)
        return 1;
    else if(m==1)
        return n;
    long long int tmp=powi(n,(m>>1))%MOD;
    if(m&1)
        return ((tmp*tmp)%MOD)*n%MOD;
    else
        return (tmp*tmp)%MOD;
    return 0;
}

void DFS(int x)
{
    int i;
    int y;

//    printf(">>>%d\n",x);
    for(i=0;i<adj[x].size();i++)
    {
        y=adj[x][i];
        if(color[y]==0)
        {
            if(color[x]==1)
            {
//                printf("color\n");
                color[y]=2;
                c2++;
            }
            else if(color[x]==2)
            {
                color[y]=1;
                c1++;
            }
            DFS(y);
        }
        else
        {
            if(color[x]==color[y])
                flag=0;
        }
        if(flag==0)
            return;
    }

    return;
}
