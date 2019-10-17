#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        int b,w;
        scanf("%d %d",&b,&w);

        if(max(b,w)>min(b,w)*3+1)
            printf("NO\n");
        else
        {
            printf("YES\n");
            int h=max(b,w);
            int k=min(b,w);
            int x=(b>=w? 2:3);
            if(h>k)
            {
                printf("%d %d\n",x,1);
                h--;
            }
            for(i=2; h-3>=0;i+=2)
            {
                printf("%d %d\n",x,i);
                printf("%d %d\n",x-1,i);
                printf("%d %d\n",x+1,i);
                printf("%d %d\n",x,i+1);
                h-=3;
                k-=1;
            }
            if(h>0)
            {
                printf("%d %d\n",x,i);
                printf("%d %d\n",x-1,i);
                h--;
                k--;
            }
            if(h>0)
            {
                printf("%d %d\n",x+1,i);
                h--;
            }
            // printf("round 2 h=%d k=%d\n",h,k);
            for(i=1; k-3>=0;i+=2)
            {
                printf("%d %d\n",x-1,i);
                printf("%d %d\n",x+1,i);
                printf("%d %d\n",x+2,i+1);
                k-=3;
            }
            if(k>0)
            {
                printf("%d %d\n",x-1,i);
                k--;
            }
            if(k>0)
            {
                printf("%d %d\n",x+1,i);
                k--;
            }

            // printf("\n");
        }
    }

    return 0;
}
