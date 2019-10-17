#include<bits/stdc++.h>

using namespace std;

int arr[300007]={};
vector<int>keep[32];
int mini[32];
int ans[300007];
int maxi_3[3]={};

int bs(int l,int r,int x)
{
    if(l==r)
        return l;
    int m=(l+r)/2;
    if((1<<m)>x)
        return bs(l,m,x);
    else
        return bs(m+1,r,x);
}

int main()
{
    int i,j;
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

    for(i=1;i<=n;i++)
    {
        if(arr[i]!=0)
        {
            int k=bs(0,29,arr[i]);
            if(keep[k].empty())
                mini[k]=arr[i];
            else
                mini[k]=min(arr[i],mini[k]);
            keep[k].push_back(arr[i]);
        }
    }
    for(i=0,j=1;i<=29;i++)
    {
        if(!keep[i].empty())
        {
            bool used=0;
            ans[j++]=mini[i];
            for(auto it:keep[i])
            {
                if(it==mini[i])
                {
                    if(!used)
                        used=1;
                    else
                        ans[j++]=it;
                }
                else
                    ans[j++]=it;
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
