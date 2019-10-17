#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

int DP[100007][2];
vector<int>arr[100007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        int a;
        scanf("%d",&a);
        arr[a].push_back(i);
    }
    arr[0].push_back(1);
    arr[0].push_back(1);
    LLI total=0;
    for(i=1;i<=n;i++)
    {
//        printf(">>>%d,%d\n",arr[i][0],arr[i][1]);
        int n1=abs(arr[i][0]-arr[i-1][0])+abs(arr[i][1]-arr[i-1][1]);
        int n2=abs(arr[i][1]-arr[i-1][0])+abs(arr[i][0]-arr[i-1][1]);
//        printf("!>>%d,%d\n",n1,n2);
        if(n1<n2)
        {
            total+=n1;
        }
        else
        {
            total+=n2;
        }
    }
    printf("%I64d\n",total);

    return 0;
}
