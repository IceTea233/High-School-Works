#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int arr[200007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    int btm = 1;
    int top = n*2;

    if(n%2==0)
    {
        printf("NO\n");
        return 0;
    }

    for( i=0; i<n;i++)
    {
        if(i%2==0)
        {
            arr[i] = btm++;
            arr[i+n] = btm++;
        }
        else
        {
            arr[i] = top--;
            arr[i+n] = top--;
        }
    }

    printf("YES\n");
    for( i=0; i<n*2; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
