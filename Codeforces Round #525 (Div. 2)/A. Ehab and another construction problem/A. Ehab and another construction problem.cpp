#include<cstdio>

int main()
{
    int i,j;
    int x;
    int flag=0;
    int a,b;

    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i*j>x && i%j==0 && i/j<x)
            {
                flag=1;
                a=i;
                b=j;
            }
        }
    }
    if(flag)
        printf("%d %d\n",a,b);
    else
        printf("-1\n");

    return 0;
}
