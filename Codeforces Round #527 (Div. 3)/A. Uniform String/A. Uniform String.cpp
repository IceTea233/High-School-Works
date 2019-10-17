#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            printf("%c",'a'+(i%k));
        }
        printf("\n");
    }

	return 0;
}
