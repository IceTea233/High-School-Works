#include<bits/stdc++.h>

#define ULLI unsigned long long int

using namespace std;

ULLI a[200007];
ULLI b[200007];

int main()
{
    int i,j;
    int n;


    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        scanf("%I64u",&b[i]);
//        printf("check\n");
    }

    ULLI num1=0,num2=1e18;
    for(i=1;i<=n/2;i++)
    {
        if(num1+num2<b[i])
        {
            num1+=b[i]-(num1+num2);
        }
        else if(num1+num2>b[i])
        {
            num2-=(num1+num2)-b[i];
        }
        a[i]=num1;
        a[n-i+1]=num2;
    }

    for(i=1;i<=n;i++)
    {
        printf("%I64u ",a[i]);
    }

    return 0;
}
