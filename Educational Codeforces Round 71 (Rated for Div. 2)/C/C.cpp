#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890987654321

using namespace std;

LLI dp[200007][2];
char s[200007];
bool road[200007];

int main()
{
    int i,j;
    int T;

    scanf("%d",&T);
    while(T--)
    {
        LLI n,a,b;
        scanf("%I64d %I64d %I64d",&n,&a,&b);
        scanf("%s",s);
        for( i=0; i<n; i++)
        {
            road[i] = (s[i]=='1');
        }
        road[n] = 0;

        dp[0][0] = a+b;
        dp[0][1] = a*2+b;
        for( i=1; i<n; i++)
        {
            if(road[i])
            {
                dp[i][0] = ULTRA;
                dp[i][1] = dp[i-1][1]+a+b*2;
            }
            else
            {
                if(road[i+1])
                {
                    dp[i][0] = ULTRA;
                    dp[i][1] = min(dp[i-1][0]+a*2+b,dp[i-1][1]+a+b*2);
                }
                else
                {
                    dp[i][0] = min(dp[i-1][0]+a+b,dp[i-1][1]+a*2+b*2);
                    dp[i][1] = min(dp[i-1][0]+a*2+b,dp[i-1][1]+a+b*2);
                }
            }
        }

        // for( i=0; i<n; i++)
        // {
        //     printf("%I64d ",dp[i][0]);
        // }
        // printf("\n");
        printf("%I64d\n",dp[n-1][0]+b);
    }

    return 0;
}
