#include<cstdio>

int main()
{
    int i,j;
    int n;
    int chart[17][17]={0};

    scanf("%d",&n);
    chart[1][1]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 && j==1)
                continue;
            chart[i][j]=chart[i-1][j]+chart[i][j-1];
        }
    }
    printf("%d\n",chart[n][n]);

    return 0;
}
