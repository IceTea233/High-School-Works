#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int arr[100007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int zero = 0;
    LLI cnt = 0;
    int neg = 0;
    for( i=0; i<n ;i++)
    {
        if(arr[i]==0)
        {
            zero++;
            cnt++;
        }
        else if(arr[i] > 0)
        {
            cnt += arr[i]-1;
        }
        else if(arr[i] < 0)
        {
            neg++;
            cnt += (-1)-arr[i];
        }
    }

    if(neg%2==1 && zero==0)
    {
        cnt+=2;
    }

    printf("%I64d\n",cnt);

    return 0;
}
