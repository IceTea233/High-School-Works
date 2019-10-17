#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    while(n--)
    {
        long long int k;
        int x;
        scanf("%I64d %d",&k,&x);
        printf("%I64d\n",x+9*(k-1));
    }


    return 0;
}
