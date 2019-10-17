#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

LLI a[1000007]={};
LLI b[1000007]={};

int main()
{
    int i,j;
    int n,m;
    int ta,tb,k;

    scanf("%d %d %d %d %d",&n,&m,&ta,&tb,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%lld",&b[i]);
    }

    if(n<=k || m<=k)
    {
        printf("-1");
        return 0;
    }

    vector<LLI>keep;
    for(i=0;i<n;i++)
    {
        keep.push_back(a[i]+ta);
    }
    sort(keep.begin(),keep.end());
    keep.push_back(ULTRA);
    sort(b,b+m);

    bool flag=0;
    LLI maxi=-1;

    for(i=0,j=0;i<n && i<=k;i++)
    {
        while(b[j]<keep[i])
            j++;
//        printf(">>>%lld %lld\n",keep[i],b[j]);
        if(j+(k-i)>=m)
        {
            flag=1;
            break;
        }
        else
        {
            maxi=max(maxi,b[j+(k-i)]+tb);
        }
    }

    if(flag)
        printf("-1\n");
    else
        printf("%lld\n",maxi);


    return 0;
}
