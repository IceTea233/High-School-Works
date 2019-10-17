#include<bits/stdc++.h>
#define LLI long long int

using namespace std;

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);

    int a[1007];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    vector<int>keep;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            keep.push_back(a[i]+a[j]);
        }
    }

    sort(keep.begin(),keep.end());

    int maxi=0;
    int c=1;
    for(i=1;i<keep.size();i++)
    {
        if(keep[i]==keep[i-1])
        {
            c++;
        }
        else
        {
            maxi=max(c,maxi);
            c=1;
        }
    }
    maxi=max(c,maxi);
    printf("%d\n",maxi);

    return 0;
}
