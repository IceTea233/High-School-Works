#include<cstdio>

int main()
{
    int n;

    scanf("%d",&n);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a)
            flag=1;
    }
    if(flag)
        printf("HARD\n");
    else
        printf("EASY\n");

    return 0;
}
