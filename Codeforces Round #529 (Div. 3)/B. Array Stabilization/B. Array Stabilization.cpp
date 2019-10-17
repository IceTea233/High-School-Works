#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    int n;
	int maxi=0,mini=100007;
	int max2=0,min2=100007;

	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a>maxi)
        {
            max2=maxi;
            maxi=a;
        }
        else if(a>max2)
        {
            max2=a;
        }

        if(a<mini)
        {
            min2=mini;
            mini=a;
        }
        else if(a<min2)
        {
            min2=a;
        }
    }
//    printf("%d %d %d %d\n",maxi,max2,mini,min2);
    printf("%d\n",min(maxi-min2,max2-mini));
	return 0;
}
