#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

LLI a[300007];

int main()
{
	int i,j;
	int n;

	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    sort(a,a+n);
    LLI counti=0;
    for(i=0;i<n/2;i++)
    {
        counti+=(a[i]+a[n-i-1])*(a[i]+a[n-i-1]);
    }
    printf("%I64d\n",counti);

	return 0;
}
