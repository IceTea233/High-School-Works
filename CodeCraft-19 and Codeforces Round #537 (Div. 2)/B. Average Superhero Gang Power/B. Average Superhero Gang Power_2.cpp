#include<bits/stdc++.h>
using namespace std;

int tmp[100007];
int main()
{
    int i,j;
    int n,k,m;

    scanf("%d %d %d",&n,&k,&m);
    deque<int>arr;
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&tmp[i]);
    }
    sort(tmp,tmp+n);
    for(i=0;i<n;i++)
    {
        arr.push_back(tmp[i]);
    }

    while(m-k>arr.size()-1)

    printf("%.9f\n",avg);

    return 0;
}
