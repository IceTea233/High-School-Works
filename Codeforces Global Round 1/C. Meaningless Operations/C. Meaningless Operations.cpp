#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int q;
    int trash;

    vector<int>prime;
    prime.push_back(2);
    for(i=3;i<10000;i++)
    {
        bool flag=1;
        for(j=0;prime[j]*prime[j]<=i;j++)
        {
            if(i%prime[j]==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            prime.push_back(i);
        }
    }
    scanf("%d",&q);
    while(q--)
    {
        int a;
        scanf("%d",&a);

        int n=1;
        while(n<=a)
            n<<=1;

        bool flag=1;
        for(i=1;(n>>i);i++)
        {
            if(!(a&(n>>i)))
                flag=0;
        }
        if(flag)
        {
            int ans=1;
            for(i=0;prime[i]*prime[i]<=a;i++)
            {
                if(a%prime[i]==0)
                {
                    ans=a/prime[i];
                    break;
                }
            }
            printf("%d\n",ans);
        }
        else
        {
            printf("%d\n",n-1);
        }
    }

    return 0;
}
