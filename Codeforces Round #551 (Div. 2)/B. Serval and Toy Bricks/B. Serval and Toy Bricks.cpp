#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

int fv[107];
int lv[107];
int tv[107][107];
int ans[107][107]={};

int main()
{
    int i,j,k;
    int n,m,h;

    scanf("%d %d %d",&n,&m,&h);
    for(i=0;i<m;i++)
    {
        scanf("%d",&fv[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&lv[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&tv[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(tv[i][j])
            {
                if(fv[j]<=lv[i])
                {
                    ans[i][j]=fv[j];
                }
            }
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(tv[j][i] && !ans[j][i])
            {
                ans[j][i]=lv[j];
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }


    return 0;
}
