#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

int arr[107];

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        memset(arr,0,sizeof(arr));
        int n;
        scanf("%d",&n);
        for( i=0; i<n; i++)
        {
            int a;
            scanf("%d",&a);
            for( j=0; a>1; j++)
            {
                a /= 2;
            }
            arr[j]++;
        }
        // for( i=0; i<11; i++)
        // {
        //     printf(">>>%d\n",arr[i]);
        // }
        for( i=0; i<11; i++)
        {
            arr[i+1] += arr[i]/2;
        }
        if(arr[11])
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}
