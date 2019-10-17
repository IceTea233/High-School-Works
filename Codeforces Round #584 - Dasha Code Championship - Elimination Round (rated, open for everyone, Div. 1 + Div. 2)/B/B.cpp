#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 &&  MODE==x)
#define MODE 0
using namespace std;

int a[107],b[107];
char s[107];
bool state[107] = {};

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    scanf("%s",s);
    for( i=0; i<n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }

    int cnt = 0;
    for( i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            cnt++;
            state[i] = 1;
        }
    }
    int maxi = cnt;

    de(1) printf("check\n");

    for( i=1; i<=1000000; i++)
    {
        de(1)
        {
            for( j=0; j<n; j++)
            {
                printf("%d",state[j]);
            }
            printf("\n");
            // printf(">>>%d\n",cnt);
        }
        for( j=0; j<n; j++)
        {
            if(i>=b[j] && (i-b[j])%a[j]==0)
            {
                if(state[j])
                    cnt--;
                else
                    cnt++;
                state[j] = !state[j];
            }
        }
        maxi = max(maxi,cnt);
    }
    printf("%d\n",maxi);

    return 0;
}
