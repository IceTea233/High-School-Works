#include<bits/stdc++.h>

#define LLI long long int

using namespace std;
int a[107];
int mem[107][107];
int n,m;
int mini=107;

void func(int day,int total,int now)
{
//    printf("(%d,%d,%d)\n",day,total,now);
    if(total>=m)
    {
        mini=min(mini,day);
        return;
    }
    if(total<=mem[day][now])
    {
        return;
    }
    else
    {
        mem[day][now]=total;
    }
    int i;
    for(i=0;now+i<n;i++)
    {
//        printf("try:%d\n",a[now+i]);
        if(a[now+i]-i>0)
            total+=a[now+i]-i;
        func(day+1,total,now+i+1);
    }
}

int main()
{
    int i,j;

    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    memset(mem,-1,sizeof(mem));
    sort(a,a+n,greater<int>());
    func(0,0,0);
    if(mini==107)
        printf("-1\n");
    else
        printf("%d\n",mini);

    return 0;
}

