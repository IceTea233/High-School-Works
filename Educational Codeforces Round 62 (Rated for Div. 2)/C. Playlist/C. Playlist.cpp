#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

struct song
{
    LLI t;
    LLI b;
};
bool operator<(song a,song b)
{
    return a.t<b.t;
}

bool cmp(const song &a,const song &b)
{
    return a.b<b.b || (a.b==b.b && a.t<b.t);
}

LLI chart[1000007]={};

int main()
{
    int i,j;
    int n,k;

    scanf("%d %d",&n,&k);
    vector<song>keep;
    for(i=0;i<n;i++)
    {
        LLI t,b;
        scanf("%I64d %I64d",&t,&b);
        keep.push_back({t,b});
    }
    sort(keep.begin(),keep.end(),cmp);
    LLI sum=0;
    priority_queue<LLI,vector<LLI>,greater<LLI> >pq;
    for(i=n-1;i>=1;i--)
    {
        sum+=keep[i].t;
        pq.push(keep[i].t);
        while(pq.size()>k-1)
        {
            sum-=pq.top();
            pq.pop();
        }
        chart[i-1]=sum;
    }
    LLI maxi=0;
    for(i=0;i<n;i++)
    {
//        printf("chart[%d]=%lld\n",i,chart[i]);
        LLI value=(chart[i]+keep[i].t)*keep[i].b;
        maxi=max(value,maxi);
    }
    printf("%I64d\n",maxi);

    return 0;
}
