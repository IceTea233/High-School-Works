#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

char S[300007];

int main()
{
	int i,j;
	int n;

	scanf("%d",&n);
	scanf("%s",S);
	bool flag=0;
	for(i=0;i<n-1;i++)
    {
        if(S[i]>S[i+1])
        {
            flag=1;
            break;
        }
    }

    if(flag)
    {
        printf("YES\n");
        printf("%d %d",i+1,i+2);
    }
    else
    {
        printf("NO\n");
    }

	return 0;
}
