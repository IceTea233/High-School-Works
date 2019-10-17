#include<bits/stdc++.h>

using namespace std;

int arr[100007];
int pre[100007]={};

int sum(int l,int r)
{
    return pre[r]-pre[l-1];
}

int main()
{
	int i,j;
    int n,q;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+arr[i];
    }
    scanf("%d",&q);
    while(q--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        printf("%d\n",sum(l,r)/10);
    }

	return 0;
}
