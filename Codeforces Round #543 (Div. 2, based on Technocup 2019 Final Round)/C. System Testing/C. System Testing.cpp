#include<bits/stdc++.h>
#define LLI long long int

using namespace std;

int a[1007];
int trgt[1007]={};
int crnt[1007]={};

int main()
{
    int n,k;

    scanf("%d %d",&n,&k);

    queue<int>que;
    for(i=1;i<=n;i++)
    {
        scanf("%d",a[i]);
        que.push(a[i]);
    }

    int m=0;
    while(!que.empty())
    {
        for(i=1;i<=k;i++)
        {
            if(trgt[i]==crnt[i])
            {
                if(!que.empty())
                {
                    trgt[i]=que.front();
                    que.pop();
                    crnt[i]=1;
                }
            }
        }
    }


    return 0;
}
