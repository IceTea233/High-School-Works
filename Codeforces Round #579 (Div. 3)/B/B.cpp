#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int chart[10007];

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        memset(chart,0,sizeof(chart));
        for( i=0; i<4*n; i++)
        {
            int a;
            scanf("%d",&a);
            chart[a]++;
        }

        int area = -1;
        bool flag = 0;
        for( i=1,j=10000; i<j; )
        {
            while( !chart[i] && i!=j)
                i++;
            while( !chart[j] && j!=i)
                j--;
            if(i==j && chart[i]==0)
            {
                break;
            }

            int w = i;
            int h = j;
            chart[i]-=2;
            chart[j]-=2;
            if(area == -1)
                area = w*h;
            if(area != w*h || chart[i]<0 || chart[j]<0)
            {
                flag = 1;
                break;
            }
            // printf(">>>%d\n",w*h);
        }
        if(flag)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
