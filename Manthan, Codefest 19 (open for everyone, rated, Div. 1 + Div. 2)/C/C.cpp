#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int ans[1007][1007];

int main()
{
    int i,j,k,h;
    int n;

    scanf("%d",&n);
    int m = n/4;
    for( i=0; i<m; i++)
    {
        for( j=0; j<m; j++)
        {
            for( k=0; k<4; k++)
            {
                for( h=0; h<4; h++)
                {
                    // printf("[%d,%d](%d,%d)\n",i*4+k,j*4+h,( i*m + ((i+j)%m)),(k*4 + (k+h)%4));
                    ans[i*4 + k][j*4 + h] = ( i*m + ((i+j)%m))*16 + (k*4 + (k+h)%4);
                }
            }
            // printf("\n");
        }
    }
    // ans[i][j] = n*i + (j+i)%n;

    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
            printf("%d ",ans[i][j]);
        printf("\n");
    }


    for( i=0; i<n; i++)
    {
        int check = ans[i][0];
        for( j=1; j<n; j++)
            check ^= ans[i][j];
        printf(">>>%d\n",check);
    }
    printf("\n");

    for( i=0; i<n; i++)
    {
        int check = ans[0][i];
        for( j=1; j<n; j++)
            check ^= ans[j][i];
        printf(">>>%d\n",check);
    }



    return 0;
}
