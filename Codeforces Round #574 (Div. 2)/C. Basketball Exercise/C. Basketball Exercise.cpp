#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int arr1[100007]={};
int arr2[100007]={};

LLI dp[100007][4]={};

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
        scanf("%d",&arr1[i]);
    for(i=1;i<=n;i++)
        scanf("%d",&arr2[i]);

    for(i=1;i<=n;i++)
    {
        dp[i][0]=max(dp[i-1][0],dp[i-1][0]);
        dp[i][0]=max(dp[i][0],dp[i-1][1]);
        dp[i][0]=max(dp[i][0],dp[i-1][2]);

        dp[i][1]=(LLI)max(dp[i-1][0],dp[i-1][2])+arr1[i];
        dp[i][2]=(LLI)max(dp[i-1][0],dp[i-1][1])+arr2[i];
    }

    LLI ans=max(max(dp[n][0],dp[n][1]),dp[n][2]);

    printf("%I64d\n",ans);

    return 0;
}
