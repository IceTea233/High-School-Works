#include<bits/stdc++.h>
#define ULTRA 2134567890

using namespace std;

int a[500007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    bool flag=0;
    int start;
    int maxi_idx=1;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>a[maxi_idx])
        {
            maxi_idx=i;
        }
    }
    long long int sum=a[maxi_idx];
//    printf(">>>%I64d\n",sum);
    int mini=ULTRA;
    long long int tmp=0;
    for(i=maxi_idx-1;i>=0;i--)
    {
        if(a[i]<mini)
            mini=a[i];
        if(a[i]>=0)
            tmp+=a[i];
        else
            tmp-=a[i];
    }
    if(mini>0)
    {
        tmp-=mini*2;
    }
    sum+=tmp;
//    printf(">>>%I64d\n",sum);
    mini=ULTRA;
    tmp=0;
    for(i=maxi_idx+1;i<=n;i++)
    {
        if(a[i]<mini)
            mini=a[i];
        if(a[i]>=0)
            tmp+=a[i];
        else
            tmp-=a[i];
    }
    if(mini>0)
    {
        tmp-=mini*2;
    }
    sum+=tmp;
//    printf(">>>%I64d\n",sum);

    printf("%I64d\n",sum);



    return 0;
}
