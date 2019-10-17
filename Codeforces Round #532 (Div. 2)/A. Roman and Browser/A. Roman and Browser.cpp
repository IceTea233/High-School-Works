#include<bits/stdc++.h>

using namespace std;



int main()
{
	int i,j,b;
	int n,k;
	int c1=0,c2=0;
	int a[107];

	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
            c1++;
        else
            c2++;
    }
    int maxi=0;

    for(b=1;b<=k;b++)
    {
        int e=c1,s=c2;
        for(i=0; b+k*i <=n ; i++)
        {
            if(a[b+k*i]==1)
                e--;
            else
                s--;
        }
//        printf(">>>%d %d\n",e,s);
        maxi=max(maxi,abs(e-s));
    }
    printf("%d\n",maxi);

	return 0;
}
