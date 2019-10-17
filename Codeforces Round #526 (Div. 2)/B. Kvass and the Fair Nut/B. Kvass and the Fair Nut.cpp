#include<cstdio>
#include<algorithm>
#include<functional>

using namespace std;

int v[10007];

int main()
{
    int i;
    long long int n,s;

    scanf("%I64d %I64d",&n,&s);
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    sort(v,v+n,greater<int>());
    long long int sum=0;
    int last=v[0];
    for(i=0;i<n;i++)
    {
        sum+=static_cast<long long int>(last-v[i])*i;
        if(sum>=s)
            break;
        last=v[i];
    }
//    printf(">>>%d\n",sum);
    if(sum>=s)
        printf("%d\n",v[n-1]);
    else
    {
        if(sum+v[n-1]*n>=s)
            printf("%d\n",v[n-1]-(s-sum)/n-((s-sum)%n>0));
        else
            printf("-1\n");
    }


    return 0;
}
