#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 21345678987654321

using namespace std;

LLI arr[300007];

int main()
{
    int i,j,h;
    int n,m;
    LLI k;

    scanf("%d %d %I64d",&n,&m,&k);
    for(i=0;i<n;i++)
        scanf("%I64d",&arr[i]);


    LLI ans=0;
    for(i=0;i<m;i++)
    {
        LLI num=0;
        for(j=0;i+j*m<n;j++)
        {
            for(h=0;h<m && i+j*m+h<n;h++)
            {
                num+=arr[i+j*m+h];
                ans=max(ans,num-k);
            }
            num=max(0LL,num-k);
        }
    }

    printf("%I64d\n",ans);



    return 0;
}
