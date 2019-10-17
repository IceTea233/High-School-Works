#include<bits/stdc++.h>

using namespace std;

int x[1007];
int y[1007];
int a[1007];
int b[1007];

int main()
{
	int i;
	int n;

	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    int min_x=2134567890,max_x=-2134567890;
    int min_y=2134567890,max_y=-2134567890;
    int idx_min,idx_max;
    for(i=0;i<n;i++)
    {
        if(x[i]<min_x || x[i]==min_x && y[i]<min_y)
        {
            min_x=x[i];
            min_y=y[i];
            idx_min=i;
        }
        if(a[i]>max_x || a[i]==max_x && b[i]>max_y)
        {
            max_x=a[i];
            max_y=b[i];
            idx_max=i;
        }
    }
    printf("%d %d\n",x[idx_min]+a[idx_max],y[idx_min]+b[idx_max]);


	return 0;
}
