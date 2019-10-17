#include<cstdio>
#include<queue>

using namespace std;

int main()
{
    int i,j;
    int n,k;

    scanf("%d %d",&n,&k);
    priority_queue<int,vector<int>,greater<int> >prior;
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        prior.push(a);
    }
    int d=0;
    int x=0;
    for(i=0;i<k;i++)
    {
        x=prior.top();

        if(x-d==0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",x-d);
            d+=(x-d);
            while(!prior.empty()&&prior.top()==x)
                prior.pop();
        }
    }

    return 0;
}
