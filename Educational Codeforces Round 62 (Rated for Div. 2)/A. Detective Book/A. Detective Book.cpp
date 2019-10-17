#include<bits/stdc++.h>

using namespace std;

int arr[10007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int counti=0;
    int maxi=0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
        if(i==maxi)
        {
            counti++;
            maxi=0;
        }
    }
    printf("%d\n",counti);

    return 0;
}
