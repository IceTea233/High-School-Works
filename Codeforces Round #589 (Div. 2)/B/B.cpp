#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define MOD 1000000007
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

int r[1007];
int c[1007];
int table[1007][1007]={};
bool cancel[1007][1007]={};

int main()
{
    int i,j;
    int h,w;

    scanf("%d %d", &h, &w);
    for( i=1; i<=h; i++)
    {
        scanf("%d", &r[i]);
    }
    for( i=1; i<=w; i++)
    {
        scanf("%d", &c[i]);
    }

    for( i=1; i<=h; i++)
    {
        for( j=0; j<=r[i]; j++)
            table[i][j] = 1;
    }

    for( i=1; i<=w; i++)
    {
        for( j=0; j<=c[i]; j++)
            table[j][i] = 1;
    }

    bool flag = 0;

    for( i=1; i<=h; i++)
    {
        for( j=0; table[i][j]; j++);
        if(j!=r[i]+1)
            flag = 1;
    }

    for( i=1; i<=w; i++)
    {
        for( j=0; table[j][i]; j++)
            table[j][i] = 1;
        if(j!=c[i]+1)
            flag = 1;
    }

    if(flag)
        printf("0\n");
    else
    {
        for( i=1; i<=h; i++)
        {
            table[i][r[i]+1] = 1;
        }

        for( i=1; i<=w; i++)
        {
            table[c[i]+1][i] = 1;
        }
        LLI total = 1;
        for( i=1; i<=h; i++)
        {
            for( j=1; j<=w; j++)
            {
                if(!table[i][j])
                {
                    total *= 2;
                    total %= MOD;
                }
            }
        }
        printf("%lld\n", total);
    }

    return 0;
}
