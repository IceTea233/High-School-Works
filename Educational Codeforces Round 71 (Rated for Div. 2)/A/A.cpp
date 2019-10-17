#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int main()
{
    int i,j;
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int b,p,f;
        scanf("%d %d %d",&b,&p,&f);
        int h,c;
        scanf("%d %d",&h,&c);

        int total = 0;
        if( h>c )
        {
            total += h * min(b/2,p);
            b = max( 0, b-2*p);
            total += c * min(b/2,f);
        }
        else
        {
            total += c * min(b/2,f);
            b = max( 0, b-2*f);
            total += h * min(b/2,p);
        }

        printf("%d\n",total);

    }


    return 0;
}
