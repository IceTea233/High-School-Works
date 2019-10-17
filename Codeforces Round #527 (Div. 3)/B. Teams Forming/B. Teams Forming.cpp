#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
	int n;
	int a[107];

	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int count=0;
    for(i=1;i<n;i+=2)
    {
        count+=a[i]-a[i-1];
    }
    printf("%d",count);

	return 0;
}
