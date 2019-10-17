#include<bits/stdc++.h>

using namespace std;

long long int a[200007];
int maxi[107];

int main()
{
    int i,j;
    int n,k;

    scanf("%I64d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    char S[200007];
    scanf("%s",S);
    long long int dmg=0;
    priority_queue<long long int>pq;
    pq.push(a[0]);
    for(i=1;i<n;i++)
    {
        if(S[i]==S[i-1])
        {

        }
        else
        {
            j=0;
            while(!pq.empty())
            {
                if(j<k)
                {
//                    printf("add %I64d\n",pq.top());
                    dmg+=pq.top();
                    j++;
                }
                pq.pop();
            }
        }
        pq.push(a[i]);
    }
    j=0;
    while(!pq.empty())
    {
        if(j<k)
        {
            dmg+=pq.top();
            j++;
        }
        pq.pop();
    }
    printf("%I64d\n",dmg);


    return 0;
}
