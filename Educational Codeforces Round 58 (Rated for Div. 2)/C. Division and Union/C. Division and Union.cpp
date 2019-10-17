#include<bits/stdc++.h>

using namespace std;

pair<pair<int,int>,int > a[200007];
int ans[200007];

int main()
{
	int T;
	int i;

	scanf("%d",&T);
	while(T--)
    {
        int n;
        int idx_L=-1;
        int idx_R=-1;
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            int L,R;
            scanf("%d %d",&L,&R);
            a[i]={{L,R},i};
        }
        sort(a,a+n);
        int maxi_R=a[0].first.second;
//        printf("**>>%d\n",a[0].second);
        ans[a[0].second]=1;
        bool flag=0;
        for(i=1;i<n;i++)
        {
//            printf(">>>%d and %d\n",maxi_R,a[i].first.first);
            if(a[i].first.first>maxi_R)
            {
                flag=1;
                break;
            }
            else
            {
                maxi_R=max(maxi_R,a[i].first.second);
                ans[a[i].second]=1;
            }
        }
        if(flag)
        {
            for(i=i;i<n;i++)
            {
                ans[a[i].second]=2;
            }
            for(i=0;i<n;i++)
            {
                printf("%d%c",ans[i],i+1==n?'\n':' ');
            }
        }
        else
        {
            printf("-1\n");
        }
    }
	return 0;
}
