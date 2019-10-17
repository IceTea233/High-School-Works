#include<cstdio>

int main()
{
    int i,j;
    int n;
    int s[107];

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        s[a]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d%c",s[i],i==n? '\n':' ');
    }

    return 0;
}
