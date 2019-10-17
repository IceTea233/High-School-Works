#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 21345678987654321

using namespace std;

LLI arr[300007];
LLI dp[300007][11]={};

int main()
{
    int i,j;
    int n,m;
    LLI k;

    scanf("%d %d %I64d",&n,&m,&k);
    for(i=1;i<=n;i++)
        scanf("%I64d",&arr[i]);


    for(i=1;i<=n;i++)
    {
        dp[i][0]=0;
        if(i>=m)
            dp[i][0]=max(dp[i][0],dp[i-1][m-1]+arr[i]);

        dp[i][1]=dp[i-1][0]+arr[i]-k;

        for(j=2;j<min(m,i+1);j++)
        {
            dp[i][j]=dp[i-1][j-1]+arr[i];
        }
        // for(j=0;j<m;j++)
        //     printf("%3I64d ",dp[i][j]);
        // printf("\n");
        // system("PAUSE");
    }


    // for(i=0;i<=n;i++)
    // {
    //     LLI ans=-ULTRA;
    //     for(j=0;j<min(m,n+1);j++)
    //         ans=max(ans,dp[i][j]);
    //     printf("%I64d\n",ans);
    // }
    LLI ans=-ULTRA;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<min(m,i+1);j++)
            ans=max(ans,dp[i][j]);
    }
    
    printf("%I64d\n",ans);



    return 0;
}
