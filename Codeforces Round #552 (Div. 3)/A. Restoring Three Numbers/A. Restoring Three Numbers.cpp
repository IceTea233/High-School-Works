#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

int main()
{
    int i,j;
    int arr[7];

    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+4);
    printf("%d %d %d\n",arr[3]-arr[0],arr[3]-arr[1],arr[3]-arr[2]);


    return 0;
}
