#include<bits/stdc++.h>
#define LLI long long int

using namespace std;

int main()
{
    int i,j;
    LLI a,b,c;

    scanf("%lld %lld %lld",&a,&b,&c);
    LLI d;
    if(a==b)
        d=0;
    else
        d=1;
    printf("%lld\n",c*2+min(a,b)*2+d);

    return 0;
}
