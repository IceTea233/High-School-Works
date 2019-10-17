#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

char S[100007];

int main()
{
	int i,j;
	int n;

	scanf("%d",&n);
	scanf("%s",S);
	int a=0,b=0;
	for(i=0;i<n-11+1;i++)
    {
        if(S[i]=='8')
            a++;
        else
            b++;
    }
    if(a>b)
        printf("YES\n");
    else
        printf("NO\n");

	return 0;
}
