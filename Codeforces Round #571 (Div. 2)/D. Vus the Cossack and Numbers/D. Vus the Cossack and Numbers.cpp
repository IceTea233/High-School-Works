#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

double a[100007];
int b[100007];
bool locked[100007]={};

int main()
{
    int i,j;
    int n;
    LLI sum=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        b[i]=int(a[i]);
        if(a[i]==b[i])
        {
            locked[i]=1;
        }
        else
        {
            if(a[i]<0)
                b[i]--;
        }
        sum+=b[i];
        // printf(">>>%d\n",b[i]);
    }

    for(i=0;i<n;i++)
    {
        // printf(">>>%lld\n",sum);
        if(sum!=0 && !locked[i])
        {
            printf("%d\n",b[i]+1);
            sum++;
        }
        else
        {
            printf("%d\n",b[i]);
        }
    }


    return 0;
}
