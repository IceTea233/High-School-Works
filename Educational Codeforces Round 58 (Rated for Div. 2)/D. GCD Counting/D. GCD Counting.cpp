//unsolved
#include<bits/stdc++.h>

using namespace std;

vector<int>adj[200007];
int a[200007];
int DP[200007];
int gcd[200007];
int maxi;

void DFS(int,int);

int main()
{
    int i;
	int n;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
        int a
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
    }
    maxi=0;
    DFS(1,1);

	return 0;
}

void DFS(int x,int p)
{
    int i;

    for(i=0;i<adj[x].size();i++)
    {
        int y=adj[x][i];

        if(y!=p)
        {

        }
    }

    return;
}
