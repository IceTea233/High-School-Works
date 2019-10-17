#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int T;

    scanf("%d",&T);
    while(T--)
    {
        int n,s,t;
        scanf("%d %d %d",&n,&s,&t);
        printf("%d\n",n-min(s,t)+1);
    }

    return 0;
}
