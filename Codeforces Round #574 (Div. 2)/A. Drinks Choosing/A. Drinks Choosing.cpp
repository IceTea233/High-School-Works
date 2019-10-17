#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int arr[1007]={};

int main()
{
    int i,j;
    int n,k;

    scanf("%d %d",&n,&k);
    int m=n/2+(n%2>0);
    int counti=0;
    // printf(">>>%d\n",m);
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        arr[a]++;
    }
    for(i=1;i<=k;i++)
    {
        while(arr[i]>1 && m>0)
        {
            arr[i]-=2;
            counti+=2;
            m--;
        }
    }
    for(i=1;i<=k;i++)
    {
        while(arr[i]>0 && m>0)
        {
            arr[i]-=1;
            counti++;
            m--;
        }
    }
    printf("%d\n",counti);

    return 0;
}
