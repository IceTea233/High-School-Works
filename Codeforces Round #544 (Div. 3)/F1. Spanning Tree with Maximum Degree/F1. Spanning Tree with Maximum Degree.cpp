#include<bits/stdc++.h>

using namespace std;

int deg[200007]={};
vector<int>adj[200007];
bool visit[200007]={};

int main()
{
    int i,j;
    int n,m;

    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        deg[u]++;
        adj[v].push_back(u);
        deg[v]++;
    }
    int maxi=0;
    int root;
    for(i=1;i<=n;i++)
    {
        if(deg[i]>maxi)
        {
            maxi=deg[i];
            root=i;
        }
    }

    queue<int>que;
    vector<pair<int,int> >keep;
    que.push(root);
    visit[root]=1;
    while(!que.empty())
    {
        int x=que.front();
        que.pop();
        for(auto it:adj[x])
        {
            if(!visit[it])
            {
//                printf("visit %d\n",it);
                visit[it]=1;
                que.push(it);
                keep.push_back({x,it});
            }
        }
    }
    for(auto it:keep)
    {
        printf("%d %d\n",it.first,it.second);
    }

    return 0;
}
