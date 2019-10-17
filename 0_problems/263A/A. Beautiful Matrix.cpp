#include<cstdio>
#include<algorithm>

int main()
{
    int i,j;
    int x,y;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            int a;
            scanf("%d",&a);
            if(a==1)
            {
                x=i;
                y=j;
            }
        }
    }
    printf("%d\n",abs(x-2)+abs(y-2));

    return 0;
}
