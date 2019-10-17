#include<bits/stdc++.h>
#define LLI long long int

using namespace std;

int arr[100007]={};

int main()
{
    int i,j;
    int n,k,m;
    LLI sum=0;

    scanf("%d %d %d",&n,&k,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    sort(arr,arr+n+1);
    double maxi=0;
    for(i=0;i<=min(m,n-1);i++)
    {
        sum-=arr[i];
        LLI add=min((LLI)k*(n-i),(LLI)m-i);
//        printf("sum=%I64d\n",sum);
//        printf("add=%I64d\n",add);
        maxi=max(maxi,(double)(sum+add)/(n-i));
//        printf("i=%d,res=%.9f\n",i,(double)(sum+add)/(n-i));
    }
    printf("%.9f\n",maxi);

    return 0;
}
