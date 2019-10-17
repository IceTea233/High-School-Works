#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int a,b;

    scanf("%d %d",&a,&b);

    if(a>b)
        swap(a,b);
    if(b%a==0)
    {
        printf("%d\n",0);
    }
    else if(a>=b/2)
    {

    }
    else
    {
        int c=b-a;
        if(a%c==0)
            printf("%d\n",0);
        else
        {
            int d=c-(a%c);
            printf("%d\n",d);
        }
    }


    return 0;
}
