#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 0
using namespace std;

struct info
{
    int a;
    int b;
};

info arr[300007];
LLI dp[300007][3];

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);

    while(q--)
    {
        int n;
        scanf("%d",&n);
        for( i=1; i<=n; i++)
        {
            scanf("%d %d",&(arr[i].a),&(arr[i].b));
        }
        dp[1][0] = 0;
        dp[1][1] = arr[1].b;
        dp[1][2] = arr[1].b*2;
        for( i=2; i<=n; i++)
        {
            if(arr[i].a - arr[i-1].a == -2)
            {
                dp[i][0] = min( min( dp[i-1][0], dp[i-1][1]), dp[i-1][2]);
                dp[i][1] = min( min( dp[i-1][0], dp[i-1][1]), dp[i-1][2]) + arr[i].b;
                dp[i][2] = min( dp[i-1][1], dp[i-1][2])                   + arr[i].b*2;
            }
            else if(arr[i].a - arr[i-1].a == -1)
            {
                dp[i][0] = min( min( dp[i-1][0], dp[i-1][1]), dp[i-1][2]);
                dp[i][1] = min( dp[i-1][1], dp[i-1][2])                   + arr[i].b;
                dp[i][2] = min( dp[i-1][0], dp[i-1][2])                   + arr[i].b*2;
            }
            else if(arr[i].a - arr[i-1].a == 0)
            {
                dp[i][0] = min( dp[i-1][1], dp[i-1][2]);
                dp[i][1] = min( dp[i-1][0], dp[i-1][2])                   + arr[i].b;
                dp[i][2] = min( dp[i-1][0], dp[i-1][1])                   + arr[i].b*2;
            }
            else if(arr[i].a - arr[i-1].a == 1)
            {
                dp[i][0] = min( dp[i-1][0], dp[i-1][2]);
                dp[i][1] = min( dp[i-1][0], dp[i-1][1])                   + arr[i].b;
                dp[i][2] = min( min( dp[i-1][0], dp[i-1][1]), dp[i-1][2]) + arr[i].b*2;
            }
            else if(arr[i].a - arr[i-1].a == 2)
            {
                dp[i][0] = min( dp[i-1][0], dp[i-1][1]);
                dp[i][1] = min( min( dp[i-1][0], dp[i-1][1]), dp[i-1][2]) + arr[i].b;
                dp[i][2] = min( min( dp[i-1][0], dp[i-1][1]), dp[i-1][2]) + arr[i].b*2;
            }
            else
            {
                dp[i][0] = min( min( dp[i-1][0], dp[i-1][1]), dp[i-1][2]);
                dp[i][1] = min( min( dp[i-1][0], dp[i-1][1]), dp[i-1][2]) + arr[i].b;
                dp[i][2] = min( min( dp[i-1][0], dp[i-1][1]), dp[i-1][2]) + arr[i].b*2;
            }
        }
        // for( i=1; i<=n; i++)
        // {
        //     printf(">>>%lld %lld %lld\n",dp[i][0], dp[i][1], dp[i][2]);
        // }
        printf("%lld\n",min( min( dp[n][0], dp[n][1]), dp[n][2]));
    }
    return 0;
}
