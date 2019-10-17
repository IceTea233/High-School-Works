#include<cstdio>

using namespace std;

long long int s[500007];
long long int a[500007];

int main()
{
    int i;
    int n;

    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        scanf("%I64d",&s[i]);
    }
    long long int L=0;
    long long int R=1e18;
    for(i=1;i<=n/2;i++)
    {
        if(L+R>s[i])
        {
            R-=(L+R)-s[i];
        }
        if(L+R<s[i])
        {
            L+=(s[i]-(L+R));
        }
        a[i]=L;
        a[n-i+1]=R;
    }
    for(i=1;i<=n;i++)
    {
        printf("%I64d%c",a[i],i==n?'\n':' ');
    }

	return 0;
}
