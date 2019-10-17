#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define MOD 998244353

using namespace std;

struct info
{
    int x;
    int y;
};

bool cmp1(const info &a,const info &b)
{
    if(a.x==b.x)
        return a.y<b.y;
    else
        return a.x<b.x;
}

bool cmp2(const info &a,const info &b)
{
    if(a.y==b.y)
        return a.x<b.x;
    else
        return a.y<b.y;
}

int a[300007],b[300007];
info X[300007],Y[300007];


int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }

    for( i=0; i<n; i++)
    {
        X[i] = {a[i],b[i]};
        Y[i] = {a[i],b[i]};
    }
    sort(X,X+n,cmp1);
    sort(Y,Y+n,cmp2);

    LLI cnt1 = 1;
    for( i=0; i<n; i++)
    {
        LLI tmp = 1;
        for( j=2; i+1<n && X[i].x == X[i+1].x; i++,j++)
        {
            tmp *= j;
            tmp %= MOD;
        }
        cnt1 *= tmp;
        cnt1 %= MOD;
    }
    // printf(">>>%I64d\n",cnt1);

    LLI cnt2 = 1;
    for( i=0; i<n; i++)
    {
        LLI tmp = 1;
        for( j=2; i+1<n && Y[i].y == Y[i+1].y; i++,j++)
        {
            tmp *= j;
            tmp %= MOD;
        }
        cnt2 *= tmp;
        cnt2 %= MOD;
    }
    // printf(">>>%I64d\n",cnt2);

    bool flag = 0;
    for( i=1; i<n; i++)
    {
        if(X[i].y < X[i-1].y)
        {
            flag = 1;
        }
    }

    LLI cnt3 = 0;
    if(!flag)
    {
        cnt3 = 1;
        LLI tmp = 1;
        for( i=0; i<n; i++)
        {
            LLI tmp = 1;
            for( j=2; i+1<n && X[i].x == X[i+1].x && X[i].y == X[i+1].y; i++,j++)
            {
                tmp *= j;
                tmp %= MOD;
            }
            cnt3 *= tmp;
            cnt3 %= MOD;
        }
    }
    // printf(">>>%I64d\n",cnt3);

    LLI total = 1;
    for( i=0; i<n; i++)
    {
        total *= (i+1);
        total %= MOD;
    }
    // printf(">>>%I64d\n",total);
    LLI ans = ( total - (cnt1+cnt2-cnt3+MOD)%MOD + MOD ) % MOD;
    printf("%I64d\n",ans);



    return 0;
}
