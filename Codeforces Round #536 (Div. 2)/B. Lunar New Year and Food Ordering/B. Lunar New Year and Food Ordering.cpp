#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

struct info
{
    LLI cost;
    int num;
};

bool operator<(info a,info b)
{
    if(a.cost==b.cost)
        return a.num<b.num;
    else
        return a.cost<b.cost;
}

int a[100007];
LLI c[100007];
info sorted[100007];



int main()
{
	int i,j;
	int n,m;

    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&(sorted[i].cost));
        sorted[i].num=i+1;
        c[i+1]=sorted[i].cost;
    }
    sort(sorted,sorted+n);
//    for(i=0;i<n;i++)
//    {
//        printf("%d(%I64d)",sorted[i].num,sorted[i].cost);
//    }
//    printf("\n");
    int idx=0;
    for(i=0;i<m;i++)
    {
        LLI t;
        int d;
        LLI total=0;

        scanf("%I64d %d",&t,&d);
        if(a[t]>=d)
        {
            total+=c[t]*(LLI)d;
            a[t]-=(LLI)d;
            d=0;
        }
        else
        {
            total+=c[t]*a[t];
            d-=a[t];
            a[t]=0;
        }
//        printf(">>>%I64d\n",total);
        while(d!=0)
        {
            if(idx>=n)
                break;
            int take=sorted[idx].num;
            if(a[take]>=d)
            {
                total+=c[take]*d;
                a[take]-=d;
                d=0;
            }
            else
            {
                total+=c[take]*a[take];
                d-=a[take];
                a[take]=0;
                idx++;
            }
        }
        if(d>0)
            total=0;
        printf("%I64d\n",total);
    }

	return 0;
}
