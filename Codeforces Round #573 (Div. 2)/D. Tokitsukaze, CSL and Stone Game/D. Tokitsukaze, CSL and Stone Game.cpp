#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

int arr[100007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    bool flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]!=0)
            flag=1;
    }
    sort(arr,arr+n);
    if(arr[0]==0 && arr[1]==0)
        flag=0;

    int same=0;
    for(i=1;i<n;i++)
    {
        if(arr[i-1]==arr[i])
        {
            same++;
            if(i-2>=0 && arr[i-2]==arr[i]-1)
                flag=0;
        }
    }

    if((!flag) || same>1)
    {
        printf("cslnb\n");
    }
    else
    {
        LLI counti=0;
        flag=0;
        for(i=0;i<n;i++)
        {
            counti+=(LLI)(arr[i]-i);
        }
        if(counti%2==1)
            printf("sjfnb\n");
        else
            printf("cslnb\n");
    }

    return 0;
}
