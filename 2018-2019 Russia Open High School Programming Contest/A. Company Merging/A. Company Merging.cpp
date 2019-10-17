#include<cstdio>

long long int unit[200007]={0};
long long int lead[200007]={0};

int main()
{
    int i,j;
    int n;

    long long int max=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        long long int m;
        scanf("%I64d",&m);
        unit[i]=m;

        for(j=0;j<m;j++)
        {
            long long int a;
            scanf("%I64d",&a);
            if(a>max)
                max=a;
            if(a>lead[i])
                lead[i]=a;
        }
    }
    long long int total=0;
    for(i=0;i<n;i++)
    {
//        printf(">>>%d\n",max-lead[i]);
        total+=(unit[i]*(max-lead[i]));
    }
    printf("%I64d\n",total);

    return 0;
}
