#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

bool prime[2007]={};
bool adj[1007][1007]={};
vector<pair<int,int>>ans;

int main()
{
    int i,j;
    int n;

    prime[2]=1;
    for(i=3;i<2000;i++)
    {
        bool flag=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
                flag=1;
        }
        if(!flag)
        {
            prime[i]=1;
        }
    }

    scanf("%d",&n);

    int counti=0;
    for(i=0;i<n;i++)
    {
        ans.push_back({(i%n)+1,(i+1)%n+1});
        counti++;
    }

    for(i=1;!prime[counti];i++)
    {
        ans.push_back({i,n/2+i});
        counti++;
    }

    printf("%d\n",counti);
    for(auto it:ans)
        printf("%d %d\n",it.first,it.second);

    return 0;
}
