#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        int c,m,x;
        scanf("%d %d %d",&c,&m,&x);
        if( c>m)
            printf("%d\n",min( min( m, c+x), (c+m+x)/3));
        else
            printf("%d\n",min( min( c, m+x), (c+m+x)/3));
    }

    return 0;
}
