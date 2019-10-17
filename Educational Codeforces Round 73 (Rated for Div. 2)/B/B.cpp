#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for( i=0 ;i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            if((i+j)%2)
                printf("W");
            else
                printf("B");
        }
        printf("\n");
    }

    return 0;
}
