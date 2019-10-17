#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 0
using namespace std;

struct info
{
    int a;
    int b;
};


info arr[300007];

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        for( i=0; i<n; i++)
        {
            scanf("%d %d",&(arr[i].a),&(arr[i].b));
        }
        LLI ans = 0;
        for( i=0; i<n; i++)
        {
            int now = arr[i].a;
            priority_queue<int>pq;
            LLI total = 0;

            for( ; i<n && arr[i].a==now; i++)
            {
                total += arr[i].b;
                pq.push(arr[i].b);
            }
            while(!pq.empty())
            {
                total -= pq.top();
                pq.pop();
                ans += total;
                printf("ans += %lld\n",total);
                now++;
                for( ; i<n && arr[i].a==now; i++)
                {
                    total += arr[i].b;
                    pq.push(arr[i].b);
                }
            }
        }
        printf("ans = %lld\n",ans);
    }
    return 0;
}
