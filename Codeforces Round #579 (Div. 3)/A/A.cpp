#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int arr[207];

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        int s = 0;
        for( i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i] == 1)
            {
                s = i;
            }
        }

        bool flag1 = 0;
        for( i=0; i<n-1; i++)
        {
            if(arr[(s+i)%n] > arr[(s+i+1)%n])
            {
                flag1 = 1;
            }
        }
        bool flag2 = 0;
        for( i=1; i<n; i++)
        {
            if(arr[(s+i)%n] < arr[(s+i+1)%n])
            {
                flag2 = 1;
            }
        }

        if(flag1 && flag2 )
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
