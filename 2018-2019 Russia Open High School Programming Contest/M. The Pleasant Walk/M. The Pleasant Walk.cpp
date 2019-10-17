#include<cstdio>

int main()
{
    int i;
    int n,k;

    scanf("%d %d",&n,&k);
    int max=1;
    int count=1;
    int last;
    scanf("%d",&last);
    for(i=1;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a!=last)
            count++;
        else
        {
            count=1;
        }
        if(count>max)
            max=count;
        last=a;
    }
    printf("%d\n",max);


    return 0;
}
