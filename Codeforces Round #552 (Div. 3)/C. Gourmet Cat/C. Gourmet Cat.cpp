#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

const int mask[7]={0,1,2,0,2,1,0};
const int cost[3]={3,2,2};
int a,b,c;

int cal(int n,int type,int s)
{
    int i;

    int c=cost[type]*(n/7);
    for(i=0;i<n%7;i++)
    {
        if(mask[(s+i)%7]==type)
            c++;
    }
    return c;
}

int bs(LLI L,LLI R,int s)
{
    if(L==R)
    {
        return L;
    }

    LLI M=(L+R)/2;
    if(a>=cal(M+1,0,s) && b>=cal(M+1,1,s) && c>= cal(M+1,2,s))
        return bs(M+1,R,s);
    else
        return bs(L,M,s);
}

int main()
{
    int i,j;

    scanf("%d %d %d",&a,&b,&c);
    int ans=0;
    for(i=0;i<7;i++)
    {
        ans=max(ans,bs(0,ULTRA,i));
    }
    printf("%d\n",ans);

    return 0;
}
