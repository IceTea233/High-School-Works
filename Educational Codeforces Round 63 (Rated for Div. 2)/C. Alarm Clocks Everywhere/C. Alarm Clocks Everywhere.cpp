#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

LLI x[300007];
LLI p[300007];

int main()
{
	int i,j;
	int n,m;

	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
    {
        scanf("%I64d",&x[i]);
    }
    for(i=1;i<=m;i++)
    {
        scanf("%I64d",&p[i]);
    }

    if(n==1)
    {
        printf("YES\n");
        printf("%d %d",x[0],1);
    }
    else
    {
        LLI GCD= x[1]-x[0];
        for(i=2;i<n;i++)
        {
            GCD=__gcd(GCD,x[i]-x[i-1]);
        }
        bool flag=0;
        for(i=1;i<=m;i++)
        {
            if(GCD%p[i]==0)
            {
                flag=1;
                break;
            }
        }
//        printf(">>>%d\n",i);
        if(flag)
        {
            printf("YES\n");
            printf("%I64d %d\n",x[0],i);
        }
        else
        {
            printf("NO\n");
        }
    }

	return 0;
}
