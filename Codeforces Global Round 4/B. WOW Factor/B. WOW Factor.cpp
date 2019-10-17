#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

char s[1000007];

LLI pre[1000007]={};

int main()
{
    int i,j;

    scanf("%s",s);
    LLI total=0;

    for(i=1;s[i];i++)
    {
        if(s[i]=='v' && s[i-1]=='v')
        {
            pre[i]=pre[i-1]+1;
            total++;
        }
        else
            pre[i]=pre[i-1];
    }

    // for(i=0;s[i];i++)
    //     printf(">>>%d\n",pre[i]);

    LLI ans=0;
    for(i=0;s[i];i++)
    {
        if(s[i]=='o')
            ans+=(pre[i])*(total-pre[i]);
    }
    printf("%I64d\n",ans);

    return 0;
}
