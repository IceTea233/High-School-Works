#include<bits/stdc++.h>
#define LLI long long int
#define ULLI long long int
#define ULTRA 2134567890
#define MOD 1000000007
#define de(x) if(x!=0 && MODE==x)
#define MODE 0
using namespace std;

bool isprime(ULLI num)
{
    ULLI i;
    for( i=2; i*i<=num; i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

ULLI chart[107];

int main()
{
    ULLI i,j;
    ULLI x,n;

    vector<ULLI>keep;

    scanf("%I64u %I64u", &x, &n);
    while( x>1 && !isprime(x))
    {
        for( i=2; i*i<=x; i++)
        {
            if(x%i==0)
            {
                keep.push_back(i);
                x /= i;
                break;
            }
        }
    }
    if(x>1)
        keep.push_back(x);

    de(3)
    {
        for(auto it:keep)
            printf("prime: %lld\n", it);
    }

    ULLI ans = 1;
    ULLI next;
    for( i=0; i<keep.size(); i = next)
    {
        for( j=0; j<keep.size() && keep[i+j]==keep[i]; j++);
        de(3) printf("%llu>>>%llu\n", keep[i], j);
        next = i+j;
        ULLI m = keep[i];
        ULLI last = 1;
        ULLI cnt = 0;
        while( m<=n && m%keep[i]==0 && m/keep[i] == last)
        {
            de(2) printf("m == %llu\n", m);
            cnt += n/m;

            last = m;
            m *= keep[i];
        }
        chart[0] = keep[i];
        for( j=0; j<64; j++)
        {
            chart[j+1] = chart[j]*chart[j] % MOD;
            de(1) printf("cht[%llu] %llu\n", j, chart[j]);
        }
        de(1) printf("%llu>>> %llu\n", keep[i], cnt);
        for( j=0; j<64; j++)
        {
            if( (cnt>>j)&1)
            {
                de(1) printf("keep[%lld] === %llu\n", i, j);
                ans *= chart[j];
                ans %= MOD;
                de(1) printf("ans = %llu\n", ans);
            }
        }
    }

    printf("%llu\n", ans);

    return 0;
}
