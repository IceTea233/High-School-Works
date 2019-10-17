#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int arr[200007];

int main()
{
    int i,j;
    int T;

    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n,greater<int>());
        printf("%d\n",min(arr[1]-1,n-2));
    }

    return 0;
}
