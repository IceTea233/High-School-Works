#include<bits/stdc++.h>

using namespace std;

int origin[300007];
int arr[300007];

int main()
{
	int i,j;
    int n;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&origin[i]);
    }
    sort(origin,origin+n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            arr[i/2]=origin[i];
        else
            arr[n-(i/2+1)]=origin[i];
    }
    bool flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=arr[(i+1)%n]+arr[(i-1+n)%n])
            flag=1;
    }
    if(flag)
        printf("NO\n");
    else
    {
        printf("YES\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

	return 0;
}
