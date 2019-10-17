#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

char S[100007];
LLI cost[100007];
LLI DP[4]={0,0,0,0};

int main()
{
    int i;
	int n;

	scanf("%d",&n);
	scanf("%s",S);
	for(i=0;i<n;i++)
    {
        scanf("%I64d",&cost[i]);
    }
    int first_h,first_a,first_r,first_d;
    int final_h,final_a,final_r,final_d;
    int flag=1;

    for(i=0;i<n;i++)
    {
        if(S[i]=='h')
        {
            first_h=i;
            break;
        }
    }
    for(i;i<n;i++)
    {
        if(S[i]=='a')
        {
            first_a=i;
            break;
        }
    }
    for(i;i<n;i++)
    {
        if(S[i]=='r')
        {
            first_r=i;
            break;
        }
    }
    for(i;i<n;i++)
    {
        if(S[i]=='d')
        {
            first_d=i;
            break;
        }
    }
    if(i==n)
        flag=0;

    for(i=n-1;i>=0;i--)
    {
        if(S[i]=='d')
        {
            final_d=i;
            break;
        }
    }
    for(i;i>=0;i--)
    {
        if(S[i]=='r')
        {
            final_r=i;
            break;
        }
    }
    for(i;i>=0;i--)
    {
        if(S[i]=='a')
        {
            final_a=i;
            break;
        }
    }
    for(i;i>=0;i--)
    {
        if(S[i]=='h')
        {
            final_h=i;
            break;
        }
    }
    if(i<0)
        flag=0;
    if(flag)
    {
        LLI mini;

        LLI sum=0;
        LLI s_h=0,s_a=0,s_r=0,s_d=0;

        for(i=first_h;i<=final_d;i++)
        {
            if(S[i]=='h')
            {
                s_h+=cost[i];
                DP[0]=s_h;
            }
            else if(S[i]=='a')
            {
                s_a+=cost[i];
                DP[1]=s_a;
                DP[0]=s_h;
            }
            else if(S[i]=='r')
            {
                s_r+=cost[i];
                DP[2]=s_r;
                DP[1]=s_a;
            }
        }

        printf("%I64d\n",mini);
    }
    else
        printf("0\n");


	return 0;
}
