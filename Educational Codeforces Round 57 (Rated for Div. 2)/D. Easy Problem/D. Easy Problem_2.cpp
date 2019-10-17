#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

char S[100007];
LLI cost[100007];
LLI DP[4]={0};//{[],[h],[ha],[har]}

int main()
{
    int i;
    int n;

    scanf("%d",&n);
    scanf("%s",S);

    LLI total=0;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&cost[i]);
        total+=cost[i];
    }
    for(i=0;i<n;i++)
    {
        if(S[i]=='h')
        {
            DP[1]=max(DP[0],DP[1])+cost[i];
            DP[2]+=cost[i];
            DP[3]+=cost[i];
        }
        else if(S[i]=='a')
        {
            DP[2]=max(DP[1],DP[2])+cost[i];
            DP[0]+=cost[i];
            DP[3]+=cost[i];
        }
        else if(S[i]=='r')
        {
            DP[3]=max(DP[2],DP[3])+cost[i];
            DP[0]+=cost[i];
            DP[1]+=cost[i];
        }
        else if(S[i]=='d')
        {
            DP[0]+=cost[i];
            DP[1]+=cost[i];
            DP[2]+=cost[i];
        }
        else
        {
            DP[0]+=cost[i];
            DP[1]+=cost[i];
            DP[2]+=cost[i];
            DP[3]+=cost[i];
        }
//        printf("%I64d %I64d %I64d %I64d\n",DP[0],DP[1],DP[2],DP[3]);
    }
    LLI maxi=0;
    for(i=0;i<=3;i++)
    {
//        printf("%I64d\n",DP[i]);
        maxi=max(DP[i],maxi);
    }
    printf("%I64d\n",total-maxi);


    return 0;
}
