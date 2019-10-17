#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;


int chart[100007];
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
    }
    int mini=ULTRA;
    int ans=0;
    for(i=1;i<=n;i++)
    {
        if(s[i]>=t)
        {
            if(s[i]-t<mini)
            {
                ans=i;
                mini=s[i]-t;
            }
        }
        else
        {
            if((t-s[i])%d[i]+d[i]-s[i]<mini)
            {
                ans=i;
                mini=s[i];
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}
