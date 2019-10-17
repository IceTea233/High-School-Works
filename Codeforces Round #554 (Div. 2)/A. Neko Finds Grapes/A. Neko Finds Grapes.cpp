#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int n,m;

    int odd1=0,odd2=0;
    int even1=0,even2=0;

    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2==0)
            even1++;
        else
            odd1++;
    }
    for(i=0;i<m;i++)
    {
        int b;
        scanf("%d",&b);
        if(b%2==0)
            even2++;
        else
            odd2++;
    }
    printf("%d\n",min(even1,odd2)+min(odd1,even2));

    return 0;
}
