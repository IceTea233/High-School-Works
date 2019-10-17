#include<bits/stdc++.h>

using namespace std;

struct info
{
    int s;
    int t;
    int d;
    int w;
};

info arr[100007];

int main()
{
	int i,j;
	int n,m,k;

	scanf("%d %d %d",&n,&m,&k);
	for(i=1;i<=k;i++)
    {
        scanf("%d %d %d %d",&(arr[i].s),&(arr[i].t),&(arr[i].d),&(arr[i].w));
    }


	return 0;
}
