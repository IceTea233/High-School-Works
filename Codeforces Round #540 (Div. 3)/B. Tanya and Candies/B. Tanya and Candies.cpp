#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

int candy[200005];

int main()
{
    int i,j;
    int n;
    int sum_f[2]={};
    int sum_b[2]={};

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&candy[i]);
        sum_f[i%2]+=candy[i];
    }
    int counti=0;
    for(i=n;i>=1;i--)
    {
        sum_f[i%2]-=candy[i];
        if(sum_f[i%2]+sum_b[i%2]==sum_f[(i+1)%2]+sum_b[(i+1)%2])
        {
            counti++;
        }
        sum_b[(i+1)%2]+=candy[i];
    }
    printf("%d\n",counti);

    return 0;
}

