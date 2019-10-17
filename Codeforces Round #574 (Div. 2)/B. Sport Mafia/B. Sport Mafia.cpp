#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int main()
{
    int i,j;
    int n,k;

    scanf("%d %d",&n,&k);

    double y=(sqrt(9+8*(double)(n+k))-3)/2;
    // printf("%f\n",y);
    printf("%d\n",n-(int)y);

    return 0;
}
