#include<bits/stdc++.h>

using namespace std;

#define LLI long long int

void DFS_1(int,int,int);
void DFS_2(int,int,LLI,LLI);

LLI a[200007]={0};
LLI w[200007]={0};
LLI d[200007]={0};
vector<int>adj[200007];

LLI base;
LLI maxi;

int main()
{
    int i;
	int n;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    base=0;
    DFS_1(1,1,0);
//    for(i=1;i<=n;i++)
//    {
//        printf("d[%d]:%3d\n",i,d[i]);
//    }
//    printf("base=%d\n",base);
    maxi=base;
    DFS_2(1,1,base,0);
    printf("%I64d\n",maxi);

	return 0;
}

void DFS_2(int x,int p,LLI total,LLI add)
{
    int i;

//    printf("(%2d,%3I64d,%3I64d)\n",x,total,add);
    if(total>maxi)
        maxi=total;
    for(i=0;i<adj[x].size();i++)
    {
        int y=adj[x][i];
        if(y!=p)
        {
            LLI y_add=add+(d[x]-d[y]);
            DFS_2(y,x,total+y_add-d[y],y_add);
        }
    }

    return;
}

void DFS_1(int x,int p,int dep)
{
    int i;
    LLI w=a[x];

//    printf("at %d base+= %d*%d\n",x,a[x],dep);
    base+=dep*a[x];
    for(i=0;i<adj[x].size();i++)
    {
        int y=adj[x][i];
        if(y!=p)
        {
            DFS_1(y,x,dep+1);
            w+=d[y];
        }
    }
    d[x]=w;

    return;
}
