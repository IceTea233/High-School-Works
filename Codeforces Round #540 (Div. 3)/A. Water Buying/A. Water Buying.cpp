#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        LLI n;
        int a,b;
        scanf("%I64d %d %d",&n,&a,&b);
        if(a*2<b)
        {
            printf("%I64d\n",a*n);
        }
        else
        {
            printf("%I64d\n",b*(n/2)+a*(n%2));
        }
    }

    return 0;
}
