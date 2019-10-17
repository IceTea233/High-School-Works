//#include<bits/stdc++.h>
#include<vector>
#include<cstdio>
#include<utility>

#define to_ static_cast

using namespace std;

void DFS(int,int);

pair<int,int>p;
vector<int>adj[100007];
bool visit[100007]={0};

int counti;

int main()
{
    int i;
    int n,s;

    p={1,2};
    scanf("%d %d",&n,&s);
    for(i=0;i<n-1;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(n==2)
        printf("%d\n",s);
    else
    {
        counti=0;
        DFS(1,1);
        printf("%.8lf\n",to_<double>(s)/counti*2);
    }

    return 0;
}

void DFS(int x,int p)
{
    int i;

    if(adj[x].size()==1)
        counti++;

//    for(i=0;i<adj[x].size();i++)
    for(int y : adj[x])
    {
        //int y=adj[x][i];

        if(y!=p)
        {
            DFS(y,x);
        }
    }

    return;
}
