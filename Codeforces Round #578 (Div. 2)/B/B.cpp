#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int h[107];

int main()
{
    int i,j;
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int n,m,k;

        scanf("%d %d %d",&n,&m,&k);
        for( i=0; i<n; i++)
        {
            scanf("%d",&h[i]);
        }
        bool flag = 0;
        int keep = m;
        for( i=0; i<n-1; i++)
        {
            if( h[i]+k < h[i+1])
            {
                keep -= h[i+1] - (h[i]+k);
            }
            else
            {
                keep += min( (h[i]+k)-h[i+1],h[i]);
            }
            // printf(">>>%d\n",keep);
            if(keep<0)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
