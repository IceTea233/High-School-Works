#include<cstdio>
#include<cstdlib>

int main()
{
    int i,j;
    int n;
    int a[107];
    int sum=0;
    int unit=0;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=2134567890;
    for(i=1;i<=n;i++)
    {
        int power=0;
        for(j=1;j<=n;j++)
        {
            power+=(abs(j-i)+(j-1)+(i-1))*2*a[j];
        }
        if(power<min)
            min=power;
    }
    printf("%d\n",min);


    return 0;
}
