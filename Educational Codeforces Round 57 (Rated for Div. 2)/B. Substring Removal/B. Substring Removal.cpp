#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

char S[200007];

int main()
{
    int i;
	int n;

	scanf("%d",&n);
	scanf("%s",S);
	if(S[0]==S[n-1])
    {
        LLI L,R;
        for(i=1;S[i]==S[i-1];i++);
        L=i+1;
        for(i=1;S[n-1-i]==S[n-i];i++);
        R=i+1;
        printf("%I64d\n",(L*R)%998244353);
    }
    else
    {
        int sum=0;
        for(i=1;S[i]==S[i-1];i++);
        sum+=i+1;
        for(i=1;S[n-1-i]==S[n-i];i++);
        sum+=i+1;
        printf("%d\n",sum-1);
    }

	return 0;
}
