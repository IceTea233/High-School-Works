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
    sort(keep+1,keep+m+1);

    int op=0;
    ULLI counti=0;
    i=1;
    ULLI h=k;
    while(i<=m)
    {
        ULLI tmp=0;

        if(counti+(keep[i]-keep[i-1])>h)
        {
            h=(counti+(keep[i]-keep[i-1])/k)*k;
            if(h<counti+(keep[i]-keep[i-1]))
                h+=k;
        }
        while(i<=m && counti+(keep[i]-keep[i-1])<=h)
        {
            counti+=keep[i]-keep[i-1];
            tmp++;
            i++;
        }
        counti-=tmp;
        op++;
    }
    printf("%d\n",op);


    return 0;
}
