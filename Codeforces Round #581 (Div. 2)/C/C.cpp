#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

char s[107];

vector<int> adj[107];

int path[1000007];
int dis[107][107];
int p[107];
bool v[107];

int main()
{
    int i,j;
    int n,m;

    scanf("%d",&n);
    for( i=1; i<=n; i++)
    {
        scanf("%s",s);
        for( j=1; j<=n; j++)
        {
            if(s[j-1]=='1')
                adj[i].push_back(j);
        }
    }

    scanf("%d",&m);
    for( i=0; i<m; i++)
    {
        scanf("%d",&path[i]);
    }
    // printf("OK\n");

    memset(dis,-1,sizeof(dis));
    for( i=1; i<=n; i++)
    {
        queue<int>que;
        que.push(i);
        memset(v,0,sizeof(v));
        int step = 0;
        while(!que.empty())
        {
            int goal = que.size();
            // printf("step = %d\n",step);
            while(goal--)
            {
                int x = que.front();
                // printf(">>>%d\n",x);
                que.pop();
                if(!v[x])
                {
                    v[x] = 1;
                    dis[i][x] = step;
                    for(auto it:adj[x])
                    {
                        que.push(it);
                    }
                }
            }
            step++;
        }

    }

    // for( i=1; i<=n; i++)
    // {
    //     for( j=1; j<=n; j++)
    //     {
    //         printf("%d ",dis[i][j]);
    //     }
    //     printf("\n");
    // }

    vector<int>keep;
    for( i=0; i<m; )
    {
        keep.push_back(path[i]);
        for( j=i+1; j+1<m;j++)
        {
            if(dis[ path[i] ][ path[j] ] + dis[ path[j] ][ path[j+1] ] == dis[ path[i] ][ path[j+1] ])
                continue;
            else
                break;
        }
        i = j;
    }

    printf("%d\n",keep.size());
    for(auto it:keep)
        printf("%d ",it);
    printf("\n");

    return 0;
}
