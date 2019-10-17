#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int cht1[1007]={};
int cht2[1007]={};

int main()
{
    int i,j;
    int n,m;

    scanf("%d",&n);
    for( i=0; i<n ;i++)
    {
        int a;
        scanf("%d",&a);
        cht1[a] = 1;
    }

    scanf("%d",&m);
    for( i=0; i<m; i++)
    {
        int b;
        scanf("%d",&b);
        cht2[b] = 1;
    }

    for( i=1; i<=200; i++)
    {
        for( j=1; j<=200; j++)
        {
            if(cht1[i] && cht2[j] && !cht1[i+j] && !cht2[i+j])
            {
                printf("%d %d\n",i,j);
                return 0;
            }
        }
    }

    return 0;
}
