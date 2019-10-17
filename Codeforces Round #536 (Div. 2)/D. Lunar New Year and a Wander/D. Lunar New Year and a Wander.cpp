#include<bits/stdc++.h>

using namespace std;

vector<int>adj[100007];
bool visit[100007]={};

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
        adj[v].push_back(u);
    }

    priority_queue<int,vector<int>,greater<int> >pq;
    vector<int>record;
    pq.push(1);
    while(!pq.empty())
    {
        int x=pq.top();
        pq.pop();
        if(!visit[x])
        {
            visit[x]=1;
            record.push_back(x);
            for(auto y:adj[x])
            {
                pq.push(y);
            }
        }
    }

    for(auto it:record)
    {
        printf("%d ",it);
    }



	return 0;
}
