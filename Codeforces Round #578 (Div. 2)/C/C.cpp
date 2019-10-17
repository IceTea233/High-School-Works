#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int main()
{
    int i,j;
    LLI n,m;
    int q;

    scanf("%I64d %I64d %d",&n,&m,&q);
    LLI gcd = __gcd(n,m);
    LLI ua = n / gcd;
    LLI ub = m / gcd;
    // printf("ua = %lld, ub = %lld\n",ua,ub);
    while(q--)
    {
        LLI sx,sy,ex,ey;
        scanf("%I64d %I64d %I64d %I64d",&sx,&sy,&ex,&ey);
        LLI s,t;
        if(sx == 1)
            s = (sy-1) / ua;
        else if( sx == 2)
            s = (sy-1) / ub;

        if(ex == 1)
            t = (ey-1) / ua;
        else if ( ex == 2)
            t = (ey-1) / ub;

        // printf("s= %d, t= %d\n",s,t);
        if(s==t)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
