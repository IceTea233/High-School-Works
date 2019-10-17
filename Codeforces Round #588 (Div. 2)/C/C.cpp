#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 0
using namespace std;

int n,m;

vector<int>adj[8];
int color[8];
bool taken[8][8];
bool v[8];
bool v2[8][8];
bool flag;
int cnt;
int maxi = 0;

void DFS(int x, int p)
{
    de(0) printf("%d>>>%d\n",p,x);
    v[x] = 1;
    for(auto y:adj[x])
    {
        if(!v2[x][y])
        {
            v2[x][y] = 1;
            v2[y][x] = 1;
            if(!taken[ color[x] ][ color[y] ])
            {
                taken[ color[x] ][ color[y] ] = 1;
                taken[ color[y] ][ color[x] ] = 1;
                cnt++;
            }
        }
        if(!v[y])
        {
            DFS(y,x);
            if(flag)
                return;
        }
    }
}

void solve(int x)
{
    de(0) printf(">>>(%d)\n",x);
    int i,j;
    if(x>n)
    {
        flag = 0;
        cnt = 0;
        memset(taken,0,sizeof(taken));
        memset(v,0,sizeof(v));
        memset(v2,0,sizeof(v2));
        for( i=1; i<=n; i++)
        {
            if(!v[i])
                DFS(i,i);
        }
        if(!flag)
            maxi = max( maxi, cnt);
        return;
    }

    for( i=1; i<=6; i++)
    {
        color[x] = i;
        if(i==0)
            solve( x+1);
        else
            solve( x+1);
    }
}

int main()
{
    int i,j;


    scanf("%d %d",&n,&m);
    for( i=0; i<m; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    solve(1);
    // for( i=1; i<=n; i++)
    //     color[i] = i;
    // solve(n+1);
    printf("%d\n",maxi);

    return 0;
}
