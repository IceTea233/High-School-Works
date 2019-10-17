#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

bool chart[10];

int main()
{
    int i,j;
    int l,r;

    scanf("%d %d", &l, &r);
    for( i=l; i<=r; i++)
    {
        bool flag = 0;
        memset(chart, 0, sizeof(chart));
        int num = i;
        while(num>0)
        {
            if(chart[num%10])
            {
                flag = 1;
                break;
            }
            chart[num%10] = 1;
            num /= 10;
        }
        if(!flag)
            break;
    }
    if( i<=r)
        printf("%d\n",i);
    else
        printf("-1\n");


    return 0;
}
