#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int main()
{
    int i,j;
    int n,l,r;

    scanf("%d %d %d",&n,&l,&r);

    LLI mini = 0;

    for( i=0,j=1; i<l; i++)
    {
        mini += j;
        j *= 2;
    }

    for( i=l; i<n; i++)
    {
        mini += 1;
    }

    LLI maxi = 0;

    for( i=0,j=1; i<r; i++)
    {
        maxi += j;
        j *= 2;
    }
    for( i=r,j/=2; i<n; i++)
    {
        maxi += j;
    }

    printf("%I64d %I64d\n",mini,maxi);

    return 0;
}
