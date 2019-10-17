#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
	int q;

	scanf("%d",&q);
	for(i=0;i<q;i++)
    {
        int l,r,d;
        scanf("%d %d %d",&l,&r,&d);
        if(d<l|| d>r)
            printf("%d\n",d);
        else
        {
            printf("%d\n",r+(d-r%d));
        }
    }
	return 0;
}
