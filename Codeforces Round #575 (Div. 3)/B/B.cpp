#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int arr[200007];


int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        vector<int>keep;
        int counti=0;
        for(i=1;i<=n;i++)
        {
            int a;
            scanf("%d",&a);
            if(a%2==1)
            {
                if(counti<k-1)
                {
                    keep.push_back(i);
                }
                counti++;
            }
        }
        // printf(">>>%d\n",counti);
        if(counti<k || counti%2 != k%2)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            for(auto it:keep)
                printf("%d ",it);
            printf("%d\n",n);
        }
    }
    return 0;
}
