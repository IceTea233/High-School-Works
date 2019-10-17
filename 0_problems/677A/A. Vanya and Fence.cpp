#include<cstdio>

int main()
{
    int i;
    int n,h;
    int c;

    scanf("%d %d",&n,&h);
    c=n;
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a>h)
            c++;
    }
    printf("%d\n",c);

    return 0;
}
