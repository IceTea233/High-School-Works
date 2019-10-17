#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

LLI arr[100007];


LLI dig(LLI num,LLI k)
{
    return 0;
}

int main()
{
    int i,j;
    int n;

    while(1)
    {
        LLI num;
        LLI a,b;
        scanf("%I64d %I64d",&a,&b);
        num=pow(a,b);
        printf("%I64d\n",num);
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&arr[i]);
    }

    return 0;
}
