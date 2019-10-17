#include<bits/stdc++.h>

using namespace std;

int arr[300007]={};
int ans[300007];
int maxi_3[3]={};

int main()
{
    int i,j,k;
    int n;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=arr[maxi_3[0]])
        {
            maxi_3[2]=maxi_3[1];
            maxi_3[1]=maxi_3[0];
            maxi_3[0]=i;
        }
        else if(arr[i]>=arr[maxi_3[1]])
        {
            maxi_3[2]=maxi_3[1];
            maxi_3[1]=i;
        }
        else if(arr[i]>arr[maxi_3[2]])
        {
            maxi_3[2]=i;
        }
    }
    ans[n-1]=arr[maxi_3[0]];
    ans[n-2]=arr[maxi_3[1]];
    ans[n]=arr[maxi_3[2]];
    for(i=0;i<3;i++)
        arr[maxi_3[i]]=0;

    for(i=0,k=1;i<=29;i++)
    {
        vector<int>tmp;
        for(j=1;j<=n;j++)
        {
            if((1<<i)<=arr[j] && arr[j]<(1<<(i+1)))
            {
                tmp.push_back(j);
            }
        }
        if(tmp.size()>0)
        {
            int mini_idx=tmp[0];
            for(auto it:tmp)
            {
                if(arr[it]<arr[mini_idx])
                    mini_idx=it;
            }
            ans[k++]=arr[mini_idx];
            for(auto it:tmp)
            {
                if(it!=mini_idx)
                {
                    ans[k++]=arr[it];
                }

            }
        }

    }

    if(ans[n-1]>=ans[n]+ans[n-2])
        printf("NO\n");
    else
    {
        printf("YES\n");
        for(i=1;i<=n;i++)
        {
            printf("%d ",ans[i]);
        }
        printf("\n");
    }

    return 0;
}
