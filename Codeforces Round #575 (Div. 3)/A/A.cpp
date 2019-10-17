#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

LLI arr[7];

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        scanf("%I64d %I64d %I64d",&arr[0],&arr[1],&arr[2]);
        sort(arr,arr+3);
        printf("%I64d\n",(arr[2]-(arr[1]-arr[0]))/2+arr[1]);
    }
    return 0;
}
