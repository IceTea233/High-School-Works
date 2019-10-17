#include<cstdio>

int main()
{
    int i;
    int n;
    double sum=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        double p;
        scanf("%lf",&p);
        sum+=p;
    }
    double avg=sum/n;
    printf("%.10lf\n",avg);

    return 0;
}
