#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

int chart[107]={};

int main()
{
	int i,j;
	int n,k;

	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
    {
        int d;
        scanf("%d",&d);
        chart[d%k]++;
    }
//    for(i=0;i<k;i++)
//    {
//        printf(">>>%d\n",chart[i]);
//    }
    int sum=0;
    sum+=(chart[0]/2)*2;
    for(i=1;i<k;i++)
    {
        if(i==k-i)
            sum+=(chart[i]/2)*2;
        else
            sum+=min(chart[i],chart[k-i]);
    }
    printf("%d\n",sum);

	return 0;
}
