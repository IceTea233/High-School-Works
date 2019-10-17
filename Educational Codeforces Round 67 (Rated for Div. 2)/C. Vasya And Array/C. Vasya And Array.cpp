#include<bits/stdc++.h>

using namespace std;

int t[1007],l[1007],r[1007];
int arr[1007];

int main()
{
    int i,j,k;
    int n,m;

    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d %d",&t[i],&l[i],&r[i]);
    }

    int num=n+1;
    for(i=1;i<=n;i++)
    {
        bool flag=0;
        for(j=0;j<m;j++)
        {
            if(t[j]==1 && i>=l[j]+1 && i<=r[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
            num--;
        arr[i]=num;
    }

    bool flag=0;
    for(i=0;i<m;i++)
    {
        if(t[i]==0)
        {
            bool flag2=0;
            for(j=l[i]+1;j<=r[i];j++)
            {
                if(arr[j-1]>arr[j])
                {
                    flag2=1;
                    break;
                }
            }
            if(!flag2)
            {
                flag=1;
                break;
            }
        }
    }


    if(flag)
        printf("NO\n");
    else
    {
        printf("YES\n");
        for(i=1;i<=n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

    return 0;
}
