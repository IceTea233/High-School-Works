#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int main()
{
    int i,j;
    int T,t;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        double N,R,P;
        scanf("%lf %lf %lf",&N,&R,&P);
        if(N>=P)
        {
            printf("Case %d: 0\n",t);
            continue;
        }
        R=R/100+1;
        double r=ceil(log(P/N)/log(R));
        // printf("%f\n",r);
        printf("Case %d: %.0f\n",t,r);
    }
    return 0;
}
