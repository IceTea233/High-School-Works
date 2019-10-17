#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

int arr[200007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);

    for(i=0;i<2*n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+2*n);
    LLI len1=arr[n-1]-arr[0];
    LLI wid1=arr[2*n-1]-arr[n];
    LLI len2=arr[2*n-1]-arr[0];
    LLI wid2=ULTRA;
    for(i=1;i<=n;i++)
    {
        wid2=min(wid2,(LLI)(arr[i+n-1]-arr[i]));
    }
    LLI ans=min(len1*wid1,len2*wid2);
    printf("%I64d\n",ans);

    return 0;
}
