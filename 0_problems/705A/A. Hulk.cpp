#include<cstdio>

int main()
{
    int i;
    int n;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            printf("I hate ");
        else
            printf("I love ");

        if(i+1==n)
            printf("it\n");
        else
            printf("that ");
    }

    return 0;
}
