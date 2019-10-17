#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define MOD 998244353

using namespace std;

int main()
{
    int i,j;
    int w,h;

    scanf("%d %d",&w,&h);
    LLI ans=1;
    for(i=0;i<w;i++)
    {
        ans*=2;
        ans%=MOD;
    }
    for(i=0;i<h;i++)
    {
        ans*=2;
        ans%=MOD;
    }
    printf("%I64d\n",ans);


    return 0;
}
