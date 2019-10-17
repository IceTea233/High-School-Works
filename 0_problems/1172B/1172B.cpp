#include<bits/stdc++.h>
#define LLI long long int
#define MOD 998244353
using namespace std;

vector<int>adj[200007];

LLI DP[200007];
bool v[200007]={};

LLI P(LLI n)
{
    int i;
    LLI m=1;
    for(i=1;i<=n;i++)
    {
        m*=i;
        m%=MOD;
    }
    return m;
}

void DFS(int x)
{
    LLI k=1;
    LLI counti=0;

    v[x]=1;
    for(auto y:adj[x])
    {
        if(!v[y])
        {
            DFS(y);
            k*=DP[y];
            k%=MOD;
            counti++;
        }
    }

    if(x==1)
        k*=P(counti);
    else
        k*=P(counti+1);
    k%=MOD;
    DP[x]=k;
//    printf("%d>>>%d\n",x,counti);
}

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(1);
    printf("%lld\n",DP[1]*n%MOD);


    return 0;
}
