#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int table[2007][2007];
int b_r[2007]={};
int b_c[2007]={};
int p_r[2007][2007]={};
int p_c[2007][2007]={};
int q_r[2007][2007]={};
int q_c[2007][2007]={};
int mtx[2007][2007]={};
char s[2007];

int main()
{
    int i,j;
    int n,k;

    scanf("%d %d",&n,&k);
    for( i=1; i<=n; i++)
    {
        scanf("%s",s);
        for( j=1; j<=n;j++)
        {
            if(s[j-1]=='B')
            {
                table[i][j] = 1;
                b_r[i]++;
                b_c[j]++;
            }
            else
            {
                table[i][j] = 0;
            }
        }
    }

    // for( i=1; i<=n; i++)
    // {
    //     for( j=1; j<=n;j++)
    //     {
    //         printf("%d ",table[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    int cnt = 0;
    for( i=1; i<=n; i++)
    {
        if(b_r[i] == 0)
            cnt++;
        // printf("%d ",b_r[i]);
    }
    // printf("\n");
    for( i=1; i<=n; i++)
    {
        if(b_c[i] == 0)
            cnt++;
        // printf("%d ",b_c[i]);
    }
    // printf("\n\n");


    for( i=1; i<=n ;i++)
    {
        int tmp = 0;
        for( j=1; j<=n; j++)
        {
            tmp += table[i][j];
            if(j-k >= 1)
                tmp -= table[i][j-k];
            p_r[i][j] = (b_r[i]>0 && tmp==b_r[i]);
        }
    }
    for( i=1; i<=n ;i++)
    {
        int tmp = 0;
        for( j=1; j<=n; j++)
        {
            tmp += p_r[j][i];
            if(j-k >= 1)
                tmp -= p_r[j-k][i];
            q_r[j][i] = tmp;
        }
    }

    for( i=1; i<=n ;i++)
    {
        int tmp = 0;
        for( j=1; j<=n; j++)
        {
            tmp += table[j][i];
            if(j-k >= 1)
                tmp -= table[j-k][i];
            p_c[j][i] = (b_c[i]>0 && tmp==b_c[i]);
        }
    }

    for( i=1; i<=n ;i++)
    {
        int tmp = 0;
        for( j=1; j<=n; j++)
        {
            tmp += p_c[i][j];
            if(j-k >= 1)
                tmp -= p_c[i][j-k];
            q_c[i][j] = tmp;
        }
    }

    // for( i=1; i<=n; i++)
    // {
    //     for( j=1; j<=n;j++)
    //     {
    //         printf("%d ",q_r[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    //
    // for( i=1; i<=n; i++)
    // {
    //     for( j=1; j<=n;j++)
    //     {
    //         printf("%d ",q_c[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");


    for( i=1; i<=n; i++)
    {
        for( j=1; j<=n;j++)
        {
            mtx[i][j] = q_r[i][j]+q_c[i][j];
        }
    }
    int maxi = 0;
    for( i=1; i<=n; i++)
    {
        for( j=1; j<=n;j++)
        {
            maxi = max(maxi,mtx[i][j]);
            // printf("%d ",mtx[i][j]);
        }
        // printf("\n");
    }
    printf("%d\n",cnt+maxi);

    return 0;
}
