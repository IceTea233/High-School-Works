#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 &&  MODE==x)
#define MODE 0
using namespace std;

int a[107];
bool check[107]={};

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int cnt = 0;
    for( i=0; i<n; i++)
    {
        if(!check[i])
        {
            for( j=i; j<n; j++)
            {
                if(!check[j] && a[j]%a[i]==0)
                {
                    check[j] = 1;
                }
            }
            cnt++;
        }
    }

    printf("%d\n",cnt);

    return 0;
}
