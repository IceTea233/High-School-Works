#include<bits/stdc++.h>

using namespace std;

int a[1000007];

int main()
{
    int i,j;
    int n,m;

    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
