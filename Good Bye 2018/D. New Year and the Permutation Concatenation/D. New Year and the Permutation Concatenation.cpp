#include<bits/stdc++.h>

#define LLI long long int
#define mod 998244353

using namespace std;

LLI tool[1000007];

int main()
{
	LLI i,j;
	LLI n;

	tool[0]=1;
	for(i=1;i<=1000000;i++)
    {
        tool[i]=tool[i-1]*i%mod;
    }
	scanf("%I64d",&n);

	LLI sum=n;
    for(i=1;i<=n;i++)
    {
        sum=(sum*i-1)%mod;
    }
    sum=(sum+1)%mod;
    printf("%I64d\n",sum);

	return 0;
}
