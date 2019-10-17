#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int main()
{
    int i,j;
    int T;

    scanf("%d",&T);
    while(T--)
    {
        int a,b,n;
        scanf("%d %d %d",&a,&b,&n);
        int maxi = max(a,b);
        int ans = 0;
        for( i=0,j=1; (1<<i)<=maxi; i++,j*=2)
        {
            int dgt1 = (a>>i)&1;
            int dgt2 = (b>>i)&1;
            // printf(">>>%d %d\n",dgt1,dgt2);
            if(!dgt1 && !dgt2)
            {
                ans += 0;
            }
            else if(!dgt1 && dgt2)
            {
                ans += (n%3!=0)*j;
            }
            else if(dgt1 && !dgt2)
            {
                ans += (n%3!=1)*j;
            }
            else if(dgt1 && dgt2)
            {
                ans += (n%3!=2)*j;
            }
        }
        printf("%d\n",ans);
    }



    return 0;
}
