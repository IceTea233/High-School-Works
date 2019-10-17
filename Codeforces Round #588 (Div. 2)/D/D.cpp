#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 0
using namespace std;

LLI a[7007];
LLI b[7007];
bool take[7007] = {};

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for( i=1; i<=n; i++)
        scanf("%I64d",&a[i]);
    for( i=1; i<=n; i++)
        scanf("%I64d",&b[i]);
    set<LLI>st;
    for( i=1; i<=n; i++)
    {
        for( j=i+1; j<=n; j++)
        {
            if( a[i]==a[j])
                st.insert(a[i]);
        }
    }

    for(auto it:st)
    {
        de(1) printf(">>>%I64d\n",it);
        for( i=1; i<=n; i++)
        {
            if( ( a[i] & it) == a[i] )
                take[i] = 1;
        }
    }

    LLI ans = 0;
    for( i=1; i<=n; i++)
    {
        if( take[i])
            ans += b[i];
    }
    printf("%I64d\n",ans);


    return 0;
}
