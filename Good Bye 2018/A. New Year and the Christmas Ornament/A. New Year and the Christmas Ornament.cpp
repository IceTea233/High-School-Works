#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i;
    int y,b,r;

    scanf("%d %d %d",&y,&b,&r);
    for(i=1;i<=y && i+1<=b && i+2<=r;i++);
    i--;
    printf("%d\n",i+(i+1)+(i+2));

	return 0;
}
