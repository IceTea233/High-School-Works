#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int chart[100007];
int arr[100007];

int main()
{
    int i,j;
    int T;

    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        memset(chart,0,sizeof(chart));
        LLI ans=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
            chart[arr[i]]++;
            if(chart[arr[i]]>=2)
                ans=1;
        }
        int total=N;

        for(i=0;i<N;i++)
        {
            total--;
            chart[arr[i]]--;
            ans+=(LLI)(total-chart[arr[i]]);
        }
        printf("%lld\n",ans);
    }



    return 0;
}
