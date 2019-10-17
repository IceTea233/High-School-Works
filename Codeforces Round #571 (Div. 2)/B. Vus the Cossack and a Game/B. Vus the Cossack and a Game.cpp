#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

int main()
{
    int i,j;
    LLI n,m;

    scanf("%I64d %I64d",&n,&m);
    n++;
    m++;
    printf("%I64d\n",n*m/6);

    return 0;
}
