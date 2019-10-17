#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

int chart[1007]={};
int matrix[107][107]={};

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for(i=0;i<n*n;i++)
    {
        int a;
        scanf("%d",&a);
        chart[a]++;
    }
    int sigl=0;
    int twin=0;
    int quad=0;

    for(i=1;i<=1000;i++)
    {
        int tmp=chart[i];
        while(tmp>=4)
        {
            quad++;
            tmp-=4;
        }
        while(tmp>=2)
        {
            twin++;
            tmp-=2;
        }
        while(tmp>=1)
        {
            sigl++;
            tmp-=1;
        }
    }
//    printf(">>> %d %d %d\n",quad,twin,sigl);

    if(n%2==0)
    {
        if(twin || sigl)
        {
            printf("NO\n");
        }
        else
        {
            int idx=1;
            for(i=0;i<n/2;i++)
            {
                for(j=0;j<n/2;j++)
                {
                    while(chart[idx]<4)
                    {
                        idx++;
                    }
                    chart[idx]-=4;
                    matrix[i][j]=idx;
                    matrix[i][n-1-j]=idx;
                    matrix[n-1-i][j]=idx;
                    matrix[n-1-i][n-1-j]=idx;
                }
            }
            printf("YES\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d ",matrix[i][j]);
                }
                printf("\n");
            }
        }
    }
    else
    {
        if(!(sigl==1 && quad>=(n/2)*(n/2)))
        {
            printf("NO\n");
        }
        else
        {
            int idx=1;
            for(i=0;i<n/2;i++)
            {
                for(j=0;j<n/2;j++)
                {
                    while(chart[idx]<4)
                    {
                        idx++;
                    }
                    chart[idx]-=4;
                    matrix[i][j]=idx;
                    matrix[i][n-1-j]=idx;
                    matrix[n-1-i][j]=idx;
                    matrix[n-1-i][n-1-j]=idx;
                }
            }
            idx=1;
            for(i=0;i<n/2;i++)
            {
                while(chart[idx]<2)
                {
                    idx++;
                }
                chart[idx]-=2;
                matrix[i][n/2]=idx;
                matrix[n-1-i][n/2]=idx;
                while(chart[idx]<2)
                {
                    idx++;
                }
                chart[idx]-=2;
                matrix[n/2][i]=idx;
                matrix[n/2][n-1-i]=idx;
            }
            idx=0;
            while(chart[idx]<1)
                idx++;
            matrix[n/2][n/2]=idx;
            printf("YES\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d ",matrix[i][j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
