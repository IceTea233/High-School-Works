#include<cstdio>

int main()
{
    int i;
    int n;
    int last,now;
    int counti=1;

    scanf("%d",&n);
    scanf("%d",&last);
    for(i=1;i<n;i++)
    {
        scanf("%d",&now);
        if(now!=last)
            counti++;
        last=now;
    }
    printf("%d\n",counti);

    return 0;
}
