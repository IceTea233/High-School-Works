#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

int main()
{
    int i,j;
    int t;

    scanf("%d", &t);
    while(t--)
    {
        LLI x, y;
        scanf("%I64d %I64d", &x, &y);
        if( (x-y)>=2)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}
