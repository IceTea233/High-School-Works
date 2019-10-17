#include<bits/stdc++.h>

using namespace std;

int a[300007];
int b[300007];

int main()
{
    int i,j;
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);

        bool flag=0;
        priority_queue<int,vector<int>,greater<int> >pq;
        int r=0;
        for(i=0;i<n;i++)
        {
            for(;r<=i;r++)
                pq.push(a[i]);
            while(r<n && pq.top()!=b[i])
            {
                pq.push(a[r++]);
            }

            if(pq.top()==b[i])
                pq.pop();
            else
            {
                flag=1;
                break;
            }
        }
        if(flag)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
