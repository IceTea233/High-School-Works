#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int a[107];

    int n;
    int c1=0;
    int c2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
            c1++;
        else if(a[i]<0)
            c2++;
    }
    if(c1>=n/2+n%2)
    {
        printf("%d\n",1);
    }
    else if(c2>=n/2+n%2)
    {
        printf("%d\n",-1);
    }
    else
    {
        printf("%d\n",0);
    }

    return 0;
}
