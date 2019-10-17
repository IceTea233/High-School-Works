#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

int main()
{
	int i,j;
	int h1,h2,m1,m2;

	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);
	int time1=h1*60+m1;
	int time2=h2*60+m2;
	int mid=(time1+time2)/2;
	int hr=mid/60;
	int sec=mid%60;
	printf("%02d:%02d\n",hr,sec);

	return 0;
}
