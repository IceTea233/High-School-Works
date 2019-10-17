#include<bits/stdc++.h>

#define ULTRA 2134567890

using namespace std;

int main()
{
    int i;
	int n;
	int maxi_1=0;
	int maxi_2=0;
	char cmd,trash[7];

	scanf("%d",&n);
	fgets(trash,7,stdin);

	for(i=0;i<n;i++)
    {
        int a,b;
        scanf("%c %d %d",&cmd,&a,&b);
        if(a>b)
        {
            int tmp=a;
            a=b;
            b=tmp;
        }
        fgets(trash,7,stdin);
        if(cmd=='+')
        {
            if(a>maxi_1)
            {
                maxi_1=a;
            }
            if(b>maxi_2)
            {
                maxi_2=b;
            }
        }
        else if(cmd=='?')
        {
            if(maxi_1<=a && maxi_2<=b)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }


	return 0;
}
