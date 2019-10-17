#include<bits/stdc++.h>

using namespace std;

vector<int>adj[200007];

bool flag;
void DFS(int x,int p)
{
    int child=0;
    for(auto y:adj[x])
    {
        if(y!=p)
        {
            child++;
            DFS(y,x);
        }
    }
    if(child==1 && x!=p)
        flag=1;
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
    int root;
    for(i=1;i<=n;i++)
    {
        if(adj[i].size()==1)
        {
            root=i;
            break;
        }
    }

    flag=0;
    DFS(root,root);
    if(flag)
        printf("NO\n");
    else
        printf("YES\n");

	return 0;
}
