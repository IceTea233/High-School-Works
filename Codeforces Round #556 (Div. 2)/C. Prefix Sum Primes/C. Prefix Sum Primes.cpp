#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);

    int one=0,two=0;
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a==1)
            one++;
        else
            two++;
    }
    if(one==0)
    {
        for(i=0;i<two;i++)
        {
            printf("2 ");
        }
        printf("\n");
    }
    else
    {
        if(two==0)
        {
            for(i=0;i<one;i++)
            {
                printf("1 ");
            }
            printf("\n");
        }
        else
        {
            printf("2 1 ");
            for(i=0;i<two-1;i++)
            {
                printf("2 ");
            }
            for(i=0;i<one-1;i++)
            {
                printf("1 ");
            }
            printf("\n");
        }
    }

    return 0;
}
