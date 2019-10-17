#include<bits/stdc++.h>

#define LLI long long int
#define mod 1000000007

using namespace std;

LLI power(LLI,LLI);

int main()
{
	int i;
	LLI n;
	LLI k;
	LLI P=90;
	LLI Q=48;
	LLI ans=P*power(Q,mod-2);

	scanf("%I64d %I64d",&n,&k);

    printf("%I64d",ans%mod);

	return 0;
}

LLI power(LLI a,LLI n)
{// a ªº n ¦¸
    if(a==1||n==0)
        return 1;
    if(n==1)
        return a;
    LLI tmp = power(a,n>>1);
    if(n&1)
        return ((tmp*tmp)%mod)*a%mod;
    else
        return (tmp*tmp)%mod;
}
