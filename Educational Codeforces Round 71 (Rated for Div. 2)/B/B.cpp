#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

struct info
{
    int r;
    int c;
};

int mtx[107][107];
int ans[107][107]={};

int main()
{
    int i,j;
    int n,m;

    scanf("%d %d",&n,&m);
    for( i=1; i<=n; i++)
    {
        for( j=1; j<=m; j++)
            scanf("%d",&mtx[i][j]);
    }

    vector<info>keep;
    for( i=1; i<=n-1; i++)
    {
        for( j=1; j<=m-1; j++)
        {
            if(mtx[i][j] && mtx[i][j+1] && mtx[i+1][j] && mtx[i+1][j+1])
            {
                keep.push_back({i,j});
                ans[i][j] = 1;
                ans[i+1][j] = 1;
                ans[i][j+1] = 1;
                ans[i+1][j+1] = 1;
            }
        }
    }

    // for( i=1; i<=n; i++)
    // {
    //     for( j=1; j<=m; j++)
    //         printf("%d ",ans[i][j]);
    //     printf("\n");
    // }

    bool flag = 0;
    for( i=1; i<=n; i++)
    {
        for( j=1; j<=m; j++)
        {
            if(mtx[i][j] != ans[i][j])
                flag = 1;
        }
    }

    if(flag)
        printf("-1\n");
    else
    {
        printf("%d\n",keep.size());
        for(auto it:keep)
            printf("%d %d\n",it.r,it.c);
    }



    return 0;
}
