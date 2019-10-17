
//unsolved
#include<bits/stdc++.h>

using namespace std;

char S[1000007];
int  a[1000007]={0};
int p[1000007]={0};

int main()
{
    int i;
	int n;
	int cL=0,cR=0;

	scanf("%d",&n);
	scanf("%s",S);

	for(i=0; i<n; i++)
    {
        if(S[i]=='(')
        {
            cL++;
        }
        else if(S[i]==')')
        {
            cR++;
        }
        a[i+1]=a[i];
    }

    bool flag=1;
    int counti=0;
    if(cL-cR==2)
    {
        int mini=2134567890;
        for(i=0; i<n; i++)
        {
            if(S[i]=='(')
            {
                a[i]++;
            }
            else if(S[i]==')')
            {
                a[i]--;
            }
            a[i+1]=a[i];
        }
        for(i=n-1;i>=0;i--)
        {
            if(a[i]<mini)
                mini=a[i];
            p[i]=mini;
        }
        for(i=0;i<n;i++)
        {
            if(p[i]==2&& S[i]=='(')
                counti++;
            else if(p[i]<=-1)
                flag=0;
        }
    }
    else if(cL-cR==-2)
    {
        int mini=2134567890;
        for(i=n-1;i>=0;i--)
        {
            if(S[i]==')')
            {
                a[i]++;
            }
            else if(S[i]=='(')
            {
                a[i]--;
            }
            a[i-1]=a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<mini)
                mini=a[i];
            p[i]=mini;
        }
        for(i=n-1;i>=0;i--)
        {
            if(p[i]==2&&S[i]==')')
                counti++;
            else if(p[i]<=-1)
                flag=0;
        }
    }
    else
    {
        flag=0;
    }
//    for(i=0; i<n; i++)
//    {
//        printf("%3d",a[i]);
//    }
//    printf("\n");
//    for(i=0; i<n; i++)
//    {
//        printf("%3d",p[i]);
//    }
//    printf("\n");
    if(flag)
        printf("%d\n",counti);
    else
        printf("0\n");

	return 0;
}
