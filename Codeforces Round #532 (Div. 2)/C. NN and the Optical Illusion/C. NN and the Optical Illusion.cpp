#include<bits/stdc++.h>

#define pi 3.141592653

using namespace std;

int main()
{
	int i,j;
	double n,r;
	double R;

	scanf("%lf %lf",&n,&r);

	double theta=(pi*2/n)/2;
	R=r*sin(theta)/(1-sin(theta));
	printf("%.9lf\n",R);


	return 0;
}
