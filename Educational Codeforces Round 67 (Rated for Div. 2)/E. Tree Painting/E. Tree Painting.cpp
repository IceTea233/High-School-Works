#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

vector<int>adj[200007];
bool v[200007];
int sizee[200007]={};
int n;
LLI maxi=0;

void DFS1(int x,int lev)
{
    maxi+=lev;
    sizee[x]++;
    v[x]=1;
    for(auto y:adj[x])
    {
        if(!v[y])
        {
            DFS1(y,lev+1);
            sizee[x]+=sizee[y];
        }
    }
}

void DFS2(int x,LLI value)
{
    maxi=max(maxi,value);
    v[x]=1;
    for(auto y:adj[x])
    {
        if(!v[y])
            DFS2(y,value-sizee[y]+(n-sizee[y]));
    }
}

int main()
{
    int i,j;

    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(v,0,sizeof(v));
    DFS1(1,1);
    memset(v,0,sizeof(v));
    DFS2(1,maxi);
    printf("%I64d\n",maxi);

    return 0;
}
