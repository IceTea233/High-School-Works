#include<cstdio>
#include<queue>
using namespace std;

int n,m,a,b,point1,point2,i,j;

priority_queue< pair<int,int>,vector<pair<int,int> >,greater< pair<int,int> > > check;

int chart_1[1000007];
int chart_2[1000007];

int main()
{
    scanf("%d%d",&n,&m);

    for(i=0;i<m;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            swap(a,b);
        pair<int,int> tmp;
        tmp.first=a;
        tmp.second=b;
        check.push(tmp);
    }

    point1 = point2 = 0;
    for(i=1;i<=n&&(!check.empty());i++)//>>>for(i=1;i<=n&&!check.empty();i++)
    {
        for(j=i+1;j<=n&&(!check.empty());j++)
        {
            pair<int,int> tmp=check.top();
            check.pop();
            //printf(">>>>%d %d\n",tmp.first,tmp.second);
            //printf("**>>%d %d\n",i,j);
            if(tmp.first != i || tmp.second != j)
            {
                point1 = i;
                point2 = j;
                break;
            }
            if(check.empty())
            {
                break;
            }
        }
        if(point1)
        {
            break;
        }
        if(check.empty())
        {
            if(j<n)
            {
                point1 = i;
                point2 = j+1;
            }
            else if(i<n)
            {
                point1 = i+1;
                point2 = point1+1;
            }
            break;
        }
    }
    if(point1>=n)
        point1 = point2 = 0;
    else if(m==0 && n>1)
    {
        point1=1;
        point2=2;
    }
    if(point1)
    {
        int flag=0;
        int count=3;
        for(i=1;i<=n;i++)
        {
            if( flag==0 && i==point1 )
            {
                chart_1[i]=1;
                chart_2[i]=1;
                flag=1;
            }
            else if(flag==1 && i==point2)
            {
                chart_1[i]=2;
                chart_2[i]=1;
            }
            else
            {
                chart_1[i]=count;
                chart_2[i]=count;
                count++;
            }
        }
        printf("YES\n");
//        printf(">>>>> %d,%d\n",point1,point2);
        for(i=1;i<=n;i++)
        {
            printf("%d%c",chart_1[i],i==n? '\n':' ');
        }
        for(i=1;i<=n;i++)
        {
            printf("%d%c",chart_2[i],i==n? '\n':' ');
        }
    }
    else
        printf("NO\n");

    return 0;
}
