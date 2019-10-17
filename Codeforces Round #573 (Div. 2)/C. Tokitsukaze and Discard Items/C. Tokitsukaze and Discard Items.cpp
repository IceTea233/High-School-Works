#include<bits/stdc++.h>
#define ULLI unsigned long long int
using namespace std;

ULLI keep[100007]={};

int main()
{
    int i,j;
    ULLI n,m,k;

    scanf("%I64u %I64u %I64u",&n,&m,&k);
    for(i=1;i<=m;i++)
    {
        ULLI p;
        scanf("%I64u",&p);
        keep[i]=p;
    }

    int op=0;
    i=1;
    ULLI yee=0;
    ULLI cut=0;
    while(i<=m)
    {
        ULLI tmp=0;

        if(keep[i]-cut-yee>k)
        {
            yee+=((keep[i]-cut-yee)/k-1)*k;
            if(keep[i]-cut-yee>k)
                yee+=k;
        }

        while(i<=m && keep[i]-cut-yee <=k )
        {
            // printf("now:%I64d - %I64d\n",keep[i],cut);
            tmp++;
            i++;
        }
        cut+=tmp;
        op++;
    }
    printf("%d\n",op);


    return 0;
}
