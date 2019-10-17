
#include<bits/stdc++.h>

using namespace std;

struct info
{
    int a;
    int b;
    int val;
};

vector<int>adj[1007];
vector<info>cmd;
vector<int>stk;
int value[1007][1007];
vector<int> leaf[1007];
int maxi=0;
int root;
bool flag;

void update(int a,int b,int val)
{
    value[a][b]+=val;
    value[b][a]+=val;
}

void add_cmd(int a,int b,int val)
{
    cmd.push_back({a,b,val});
}

int DFS1(int x,int p)
{
    int child=0;
    for(auto y:adj[x])
    {
        if(y!=p)
        {
            leaf[x].push_back(DFS1(y,x));
            child++;
        }
    }
    if(child==0)
        return x;
    else
        return leaf[x][0];
}

int DFS2(int x,int p)
{
    // printf("(%d,%d)\n",x,p);
    int child=0;
    int val=0;
    for(auto y:adj[x])
    {
        if(y!=p)
        {
            val+=DFS2(y,x);
            child++;
        }
    }
    if(x==p)
        return 0;

    if(child==0)
    {
        add_cmd(root,x,value[x][p]);
        return value[x][p];
    }
    else if(child==1)
    {
        if(val!=value[x][p])
            flag=1;
        return val;
    }
    else
    {
        int delta=value[x][p]-val;
        add_cmd(root,leaf[x][0],delta/2);
        add_cmd(root,leaf[x][1],delta/2);
        add_cmd(leaf[x][0],leaf[x][1],-delta/2);
        return value[x][p];
    }
}

int main()
{
	int i,j;
    int n;

    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        int u,v,val;
        scanf("%d %d %d",&u,&v,&val);
        value[u][v]=val;
        value[v][u]=val;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(i=1;i<=n;i++)
    {
        if(adj[i].size()==1)
        {
            root=i;
            break;
        }
    }

    flag=0;
    maxi=0;
    DFS1(root,root);
    DFS2(root,root);
    if(flag)
        printf("NO\n");
    else
    {
        printf("YES\n");
        printf("%d\n",cmd.size());
        for(auto it:cmd)
        {
            printf("%d %d %d\n",it.a,it.b,it.val);
        }
    }

	return 0;
}
