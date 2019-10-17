#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

int p[200007];

int main()
{
    int i,j;
    int q;

    scanf("%d", &q);
    while(q--)
    {
        int h,n;
        scanf("%d %d", &h, &n);
        for( i=0; i<n; i++)
        {
            scanf("%d", &p[i]);
        }
        p[n] = 0;
        int cnt = 0;
        int state = 0;
        for( i=0; i<n; i++)
        {
            if( i+1<=n && p[i+1] != p[i]-1)
            {
                if(state==1)
                    cnt++;
                state = 1;
            }
            else
            {
                state = !state;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}
