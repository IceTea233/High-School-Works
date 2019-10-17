#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

int arr[300007];
LLI n,p,k;

LLI power(LLI a,int b)
{
    int i;
    LLI n=1;
    for(i=0;i<b;i++)
    {
        n*=a;
        n%=p;
    }
    return n;
}

int main()
{
    int i,j;

    scanf("%I64d %I64d %I64d",&n,&p,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    map<int,int> mp;
    int counti=0;
    for(i=0;i<n;i++)
    {
        int key=((power(arr[i],4)-k*arr[i])%p+p)%p;
        counti+=mp[key];
        mp[key]++;
    }
    printf("%d\n",counti);

    return 0;
}
