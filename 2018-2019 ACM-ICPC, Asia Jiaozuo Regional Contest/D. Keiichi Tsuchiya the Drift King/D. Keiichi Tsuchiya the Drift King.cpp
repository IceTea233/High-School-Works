#include<cstdio>
#include<cmath>

const double pi = acos(-1);
int t;
double a,b,r,d,sida;

double angle_to_bow(double);
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&r,&d);

        d = angle_to_bow(d);

        sida = atan((b)/(r+a));
        if(d>sida)
            printf("%.15lf\n",(pow(pow(a+r,2)+pow(b,2),0.5))-r);
        else
        {
            double tmp = (pow(pow(a+r,2)+pow(b,2),0.5));
            tmp = cos(sida-d)*tmp;
            printf("%.15lf\n",tmp - r);
        }
    }
    return 0;
}

double angle_to_bow(double a)
{
    return (a/180.00)*pi;
}
