#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

int arr[107];

int main()
{
    int i,j;
    int total = 0;

    for( i=0 ;i<4; i++)
    {
        scanf("%d",&arr[i]);
        total += arr[i];
    }
    bool flag = 0;
    for( i=0; i<16; i++)
    {
        int cnt = 0;
        for( j=0; j<4; j++)
        {
            if((i>>j)&1)
                cnt += arr[j];
        }
        if(cnt*2==total)
            flag = 1;
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");



    return 0;
}
