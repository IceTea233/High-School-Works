#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

int main()
{
    int i,j;
    int n;
    LLI ans=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        ans+=i*(i+1);
    }
    printf("%I64d\n",ans);


    return 0;
}
