#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define MOD 998244353

using namespace std;

LLI arr[100007];

LLI func1(LLI a)
{
    LLI i,j;
    LLI x=0;
    i=10;
    while(a>0)
    {
        x+=(a%10)*i%MOD;
        x%=MOD;
        a/=10;
        i*=100;
        i%=MOD;
    }
    return x;
}

LLI func2(LLI a)
{
    LLI i,j;
    LLI x=0;
    i=1;
    while(a>0)
    {
        x+=(a%10)*i%MOD;
        x%=MOD;
        a/=10;
        i*=100;
        i%=MOD;
    }
    return x;
}

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&arr[i]);
    }

    LLI ans=0;
    for(i=0;i<n;i++)
    {
        ans+=((func1(arr[i])%MOD)*n)%MOD;
        ans%=MOD;
        // printf("%I64d\n",ans);
    }
    for(i=0;i<n;i++)
    {
        ans+=((func2(arr[i])%MOD)*n)%MOD;
        ans%=MOD;
        // printf("%I64d\n",ans);
    }
    printf("%I64d\n",ans);

    return 0;
}
