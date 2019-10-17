#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;


int chart[200007];
int s[107];
int d[107];

int main()
{
    int i,j;
    int n,t;

    scanf("%d %d",&n,&t);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&s[i],&d[i]);
        for(j=s[i];j<=200000;j+=d[i])
        {
            chart[j]=i;
        }
    }
    for(i=t;i<=200000;i++)
    {
        if(chart[i])
        {
            printf("%d\n",chart[i]);
            break;
        }
    }

    return 0;
}
