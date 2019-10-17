#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

struct node
{
    int skill;
    int num;
    int L;
    int R;
};

bool operator<(node a,node b)
{
    return a.skill<b.skill;
}

bool taken[200007]={};
node arr[200007];
int team[200007]={};

int main()
{
    int i,j;
    int n,k;

    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&(arr[i]).skill);
    }
    arr[0].num=-1;
    arr[n+1].num=-1;

    priority_queue<node>pq;
    for(i=1;i<=n;i++)
    {
        arr[i].num=i;
    }
    for(i=1;i<=n;i++)
    {
        arr[i].L=i-1;
        arr[i].R=i+1;
        pq.push(arr[i]);
    }

    int p=0;

    while(!pq.empty())
    {
        node chosen=pq.top();
        pq.pop();
        if(!taken[chosen.num])
        {
            taken[chosen.num]=1;
            team[chosen.num]=p+1;
            int Lside=arr[chosen.num].L;
            for(i=0;i<k;i++)
            {
                if(arr[Lside].num==-1)
                    break;
                taken[arr[Lside].num]=1;
                team[arr[Lside].num]=p+1;
                Lside=arr[Lside].L;
            }
            int Rside=arr[chosen.num].R;
            for(i=0;i<k;i++)
            {
                if(arr[Rside].num==-1)
                    break;
                taken[arr[Rside].num]=1;
                team[arr[Rside].num]=p+1;
                Rside=arr[Rside].R;
            }
            arr[Rside].L=Lside;
            arr[Lside].R=Rside;
            p=!p;
//            for(i=1;i<=n;i++)
//            {
//                printf("%d",team[i]);
//            }
//            printf(">>>%d %d",Lside,Rside);
//            printf("\n");
        }

    }
    for(i=1;i<=n;i++)
    {
        printf("%d",team[i]);
    }
    printf("\n");

    return 0;
}
