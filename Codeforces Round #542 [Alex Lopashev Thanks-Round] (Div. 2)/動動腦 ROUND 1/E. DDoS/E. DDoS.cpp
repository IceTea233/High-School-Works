#include<bits/stdc++.h>

using namespace std;

int r[5007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&r[i]);
    }
    int maxi=0;
    for(i=1;i<=n;i++)
    {
        int sum=0;
        for(j=0;i+j<=n;j++)
        {
            sum+=r[i+j];
//            printf("sum=%d\n",sum);
            if(sum>100*(j+1))
            {
                maxi=max(j+1,maxi);
            }
        }
    }
    printf("%d\n",maxi);

    return 0;
}
