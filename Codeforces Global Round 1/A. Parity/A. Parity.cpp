#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int b,k;
    int a;
    int n=0;

    scanf("%d %d",&b,&k);
    for(i=k-1;i>=0;i--)
    {
        scanf("%d",&a);
        if( i>0&& a%2==1&& b%2==1 || i==0&& a%2==1)
            n++;
        n%=2;
    }
    if(n%2==0)
        printf("even\n");
    else
        printf("odd\n");

    return 0;
}
