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
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int idx=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[idx])
            idx=i;
    }
    bool flag=0;
    for(i=idx-1;i>=0;i--)
    {
        if(arr[i]>=arr[i+1])
            flag=1;
    }
    for(i=idx+1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
            flag=1;
    }

    if(flag)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
