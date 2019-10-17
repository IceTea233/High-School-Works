#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int arr[300007];

int main()
{
    int i,j;
    int n,k;

    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    LLI ans=0;
    vector<int>keep;
    for(i=1;i<n;i++)
    {
        ans+=arr[i]-arr[i-1];
        keep.push_back(arr[i]-arr[i-1]);
    }
    sort(keep.begin(),keep.end(),greater<int>());
    for(i=0;i<k-1;i++)
        ans-=keep[i];
    printf("%I64d\n",ans);

    return 0;
}
