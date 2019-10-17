#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define MOD 1000000007
#define YEE 500000004

using namespace std;

struct edge
{
    int des;
    LLI val;
};

vector<edge>adj[100007];
// bool v[100007];
LLI ans[100007];
LLI dp1[100007];
LLI dp2[100007];

void DFS0(int x,int p)
{
    dp1[x]=1;
    for(auto it:adj[x])
    {
        int y=it.des;
        if(y==p)
            continue;
        DFS0(y,x);
        dp1[x]+=dp1[y];
    }
}

void DFS1(int x,int p)
{
    dp2[x]=0;
    int child=0;
    for(auto it:adj[x])
    {
        int y=it.des;
        if(y==p)
            continue;
        DFS1(y,x);
        dp2[x]+=dp2[y]+it.val*dp1[y];
        dp2[x] %= MOD;
    }
}

void DFS2(int x, int p) {
    ans[x] = 0;
    for(auto it:adj[x])
    {
        int y=it.des;
        if(y==p)
            continue;
        DFS2(y,x);
        ans[x] += ans[y];
        ans[x] += (it.val * dp1[y] + dp2[y]) * (dp1[x] - dp1[y]);
        ans[x] %= MOD;
    }
}

int kase = 0;

int main()
{
    int i,j;
    int T;

    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            adj[i].clear();
            // v[i]=0;
        }
        for(i=1;i<=N-1;i++)
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        DFS0(1,1);
        DFS1(1,1);
        DFS2(1,1);
        LLI Ans = 0;
        for(i=1;i<=N;i++)
        {
            Ans += ans[i];
            Ans %= MOD;
            //printf(">>> %d %d %d\n",dp1[i],dp2[i], ans[i]);
        }
        printf("Case %d: %lld\n",++kase,  Ans);
    }

    return 0;
}
