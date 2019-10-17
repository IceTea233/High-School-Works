#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

char s[200007];
char mask[7]="RGB";

int main()
{
    int i,j,h;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        scanf("%s",s);

        int maxi=0;
        for(h=0;h<3;h++)
        {
            // printf("try %d:\n",h);
            int counti=0;
            for(i=0,j=0;i<n;i++)
            {
                if(s[i]==mask[(i+h)%3])
                    counti++;
                if(i-j+1>k)
                {
                    if(s[j]==mask[(j+h)%3])
                        counti--;
                    j++;
                }
                maxi=max(maxi,counti);
                // printf(">>>%d\n",counti);
            }
        }
        printf("%d\n",k-maxi);
    }

    return 0;
}
