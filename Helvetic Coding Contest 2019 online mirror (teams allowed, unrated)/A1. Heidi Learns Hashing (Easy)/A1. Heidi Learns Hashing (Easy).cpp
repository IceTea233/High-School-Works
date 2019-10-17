#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

int main()
{
    int i,j;
    LLI r;

    scanf("%I64d",&r);
    if(r%2==0 || r<=3)
    {
        printf("NO\n");
    }
    else
    {
        r--;
        printf("%d %I64d\n",1,(r-1)/2);
    }


    return 0;
}
