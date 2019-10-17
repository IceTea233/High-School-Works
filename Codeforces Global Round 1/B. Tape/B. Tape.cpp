#include<bits/stdc++.h>

using namespace std;

int b[100007];
int s[100007]={};

int main()
{
    int i,j;
    int n,m,k;

    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int sum=b[n-1]-(b[0]-1);
    for(i=0;i<n-1;i++)
    {
        s[i]=(b[i+1]-1)-b[i];
    }
    sort(s,s+(n-1),greater<int>());
    for(i=1;i<k;i++)
    {
        sum-=s[i-1];
    }
    printf("%d\n",sum);


    return 0;
}
