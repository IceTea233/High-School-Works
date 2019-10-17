//unsolved

#include<bits/stdc++.h>

#define ULTRA 2134567890

using namespace std;

void record(int,int,int);
void DFS1(int,int);
void DFS2(int,int);

vector<int>adj[1007];
vector<int>tribe[1007];
pair<int,int>info[1007];


int p[1007];
int h1[1007],h2[1007];
int c1[1007],c2[1007];
int lead[1007]={0};
int visit[1007];
int knot[1007];

int main()
{
    int i,j;
    int n,m;

    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        int v,u;
        scanf("%d %d",&v,&u);
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    memset(visit,0,sizeof(int)*(n+7));
    memset(p,0,sizeof(int)*(n+7));
    for(i=1;i<=n;i++)
    {
        if(!visit[i])
        {
            lead[i]=1;
            p[i]=i;
            DFS1(i,i);
        }
    }
//    system("PAUSE");

    for(i=1;i<=n;i++)
    {
        if(lead[i])
        {
            DFS2(i,i);
        }
//        printf("check");
    }
    for(i=1;i<=n;i++)
    {
        if(lead[i])
        {
            int b_height=ULTRA;
            int dia=0;
            for(j=0;j<tribe[i].size();j++)
            {
                int x=tribe[i][j];
                b_height=min(b_height,h1[x]);
                dia=max(dia,h1[x]);
            }
            info[i]={b_height,dia};
            for(j=0;j<tribe[i].size();j++)
            {
                int x=tribe[i][j];
                if(h1[x]==b_height)
                {
                    knot[i]=x;
                    break;
                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(lead[i])
            printf("knot of %d= %d\n",i,knot[i]);
    }
    int maxi_tree=-1;
    int maxi_len=0;
    for(i=1;i<=n;i++)
    {
        if(lead[i])
        {
            if(info[i].second>maxi_len)
            {
                maxi_len=info[i].first;
                maxi_tree=i;
            }
        }
    }

    vector<int>finali;
    for(i=1;i<=n;i++)
    {
        if(lead[i] && i!=maxi_tree)
        {
            finali.push_back(knot[i]);
            maxi_len=max(maxi_len,info[maxi_tree].first + info[i].second+1);
        }
    }
    printf("%d\n",maxi_len);
    for(i=0;i<finali.size();i++)
    {
        printf("%d %d\n",knot[maxi_tree],knot[finali[i]]);
    }

    return 0;
}

void DFS2(int x,int t)
{
    int i;

//    printf("check:%d\n",x);
//    system("PAUSE");
    tribe[t].push_back(x);

    if(p[x]!=x)
    {
        int y=p[x];

        if(c1[y]==x)
            record(x,h2[y]+1,y);
        else
            record(x,h1[y]+1,y);
    }

    for(i=0;i<adj[x].size();i++)
    {
        int y=adj[x][i];
        if(y!=p[x])
            DFS2(y,t);
    }
    return;
}

void DFS1(int x,int t)
{
//    printf("test %d\n",x);
//    system("PAUSE");
    int i;

    h1[x]=0;
    h2[x]=0;
    tribe[t].push_back(x);

    for(i=0;i<adj[x].size();i++)
    {
        int y=adj[x][i];
        visit[y]=1;
        if(y!=p[x])
        {
            p[y]=x;
            DFS1(y,t);
            record(x,h1[y]+1,y);
        }
    }
    return;
}

void record(int x,int height,int child)
{
    if(height>h1[x])
    {
        h2[x]=h1[x];
        h1[x]=height;
        c2[x]=c1[x];
        c1[x]=child;
    }
    else if(height>h2[x])
    {
        h2[x]=height;
        c2[x]=child;
    }
    return;
}
