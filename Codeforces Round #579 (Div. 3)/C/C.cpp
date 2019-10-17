#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

LLI arr[400007];

int main()
{
    LLI i,j;
    int n;

    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        scanf("%I64d",&arr[i]);
    }
    LLI gcd = arr[0];
    for( i=1; i<n; i++)
    {
        gcd = __gcd(gcd,arr[i]);
    }

    int cnt = 0;
    for( i=1; i*i<gcd; i++)
    {
        if(gcd%i==0)
            cnt += 2;
    }
    if(gcd==i*i)
        cnt += 1;
    printf("%d\n",cnt);

    return 0;
}
