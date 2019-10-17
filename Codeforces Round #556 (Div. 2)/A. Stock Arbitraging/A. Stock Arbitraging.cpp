#include<bits/stdc++.h>

using namespace std;

int s[37];
int b[37];

int main()
{
    int i,j;
    int n,m,r;

    scanf("%d %d %d",&n,&m,&r);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    sort(s,s+n);
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",s[i]);
//    }
//    printf("\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    sort(b,b+m,greater<int>());

    if(s[0]>=b[0])
    {
        printf("%d\n",r);
        return 0;
    }
    int remain=r;
    remain%=s[0];
    int keep=r/s[0];

    remain+=keep*b[0];
    printf("%d\n",remain);


    return 0;
}
