#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int chart[150007]={};
int add[150007]={};

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    int maxi = 0;
    for( i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        maxi = max(maxi,a-1);
        chart[a-1]++;
    }

    for( i=maxi; i>=0; i--)
    {
        if(chart[i] && chart[i+2]+add[i+2]==0)
        {
            chart[i]--;
            add[i+2]++;
        }
        if(chart[i] && chart[i+1]+add[i+1]==0)
        {
            chart[i]--;
            add[i+1]++;
        }
    }

    int cnt =0;
    for( i=1; i<=maxi+2; i++)
    {
        if(chart[i]+add[i]>0)
            cnt++;
    }

    printf("%d\n",cnt);

    return 0;
}
