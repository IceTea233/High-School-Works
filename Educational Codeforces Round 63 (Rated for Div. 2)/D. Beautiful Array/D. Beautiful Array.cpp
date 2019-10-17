//unsolved

#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

LLI a[300007];
LLI L[300007];
LLI R[300007];

int main()
{
	int i,j;
	int n,x;
	LLI sum=0;

	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        sum+=a[i];
    }

    LLI maxi=0;
    LLI keep=0;
    for(i=0;i<n;i++)
    {
        if(keep+a[i]>0)
        {
            keep+=a[i];
            if(keep>maxi)
            {
                maxi=keep;
            }
        }
        else
        {
            keep=0;
        }
        L[i]=maxi;
    }

    maxi=0;
    keep=0;
    for(i=n;i>=0;i--)
    {
        if(keep+a[i]>0)
        {
            keep+=a[i];
            if(keep>maxi)
            {
                maxi=keep;
            }
        }
        else
        {
            keep=0;
        }
        R[i]=maxi;
    }
//    for(i=0;i<n;i++)
//    {
//        printf("%lld ",L[i]);
//    }
//    printf("\n");
//    for(i=0;i<n;i++)
//    {
//        printf("%lld ",R[i]);
//    }
//    printf("\n");

    LLI mini=0;
    keep=0;
    int s=0,t=0;
    LLI tmp=0;
    for(i=0;i<n;i++)
    {
        if(keep+a[i]<0)
        {
            keep+=a[i];
            if(keep<mini)
            {
                mini=keep;
                s=tmp;
                t=i;
            }
        }
        else
        {
            tmp=i+1;
            keep=0;
        }
    }

    if(x==0)
    {
        LLI ans=0;
        for(i=0;i<n-1;i++)
        {
            ans=max(ans,L[i]+R[i+1]);
        }
        ans=max(L[n-1],ans);
        printf("%I64d\n",ans);
    }
    else if(x>0)
    {
        printf("%I64d\n",maxi*x);
    }
    else if(x<0)
    {
//        printf(">>>%d,%d\n",s,t);
        for(i=s;i<=t;i++)
        {
            a[i]*=x;
        }
        LLI maxi2=0;
        for(i=0;i<n;i++)
        {
            if(keep+a[i]>0)
            {
                keep+=a[i];
                maxi2=max(keep,maxi2);
            }
            else
            {
                keep=0;
            }
        }
        printf("%I64d\n",max(maxi,maxi2));
    }

	return 0;
}
