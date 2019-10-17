#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 9223372036854775800
using namespace std;

LLI lcm(LLI a,LLI b)
{
    return a*b/__gcd(a,b);
}

int main()
{
    int i,j;
    LLI a,b;

    scanf("%I64d %I64d",&a,&b);

    if(a>b)
        swap(a,b);
    if(b%a==0)
    {
        printf("%d\n",0);
    }
    else
    {
        LLI c=b-a;
        LLI mini=ULTRA;
        int ans=0;
        for(i=1;i*i<=c;i++)
        {
            if(c%i==0)
            {
                int fix;
                if(a%i==0)
                    fix=0;
                else
                    fix=i-(a%i);
                LLI LCM=lcm(a+fix,b+fix);
                if(LCM<mini)
                {
                    ans=fix;
                    mini=LCM;
                }
                else if(LCM==mini && fix<ans)
                {
                    ans=fix;
                }

                LLI j=c/i;
                if(a%j==0)
                    fix=0;
                else
                    fix=j-(a%j);
                LCM=lcm(a+fix,b+fix);
                if(LCM<mini)
                {
                    ans=fix;
                    mini=LCM;
                }
                else if(LCM==mini && fix<ans)
                {
                    ans=fix;
                }
            }
        }
        printf("%d\n",ans);
    }


    return 0;
}
