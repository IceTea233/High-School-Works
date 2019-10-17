#include<bits/stdc++.h>

using namespace std;

const int mask[3][3]={{0,1,0},
                      {1,1,1},
                      {0,1,0}};

int n;
int counti;
int table[107][107];
int flag=0;


bool check(int r,int c)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(mask[i][j]==1 && table[r+i][c+j]==1)
                return 0;
        }
    }
    return 1;
}

void solve(int r,int c)
{
    int i,j,k,h;

//    printf(">>>%d\n",flag);
    if(flag)
        return;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            printf("%d",table[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
    if(counti==0)
    {
//        printf("gets\n");
        flag=1;
    }


    for(i=r;i<n-2;i++)
    {
        for(j=(i==r?c:0);j<n-2;j++)
        {
            if(flag)
                return;
            if(i>=1 && table[i-1][j]==0)
            {
                flag=-1;
//                return;
            }

            if(check(i,j))
            {
                for(k=0;k<3;k++)
                    for(h=0;h<3;h++)
                        if(mask[k][h])
                            table[i+k][j+h]=1;
                counti-=5;

                solve(i,j+3);
                for(k=0;k<3;k++)
                    for(h=0;h<3;h++)
                        if(mask[k][h])
                            table[i+k][j+h]=0;

                counti+=5;
            }
        }
    }
}

int main()
{
    int i,j;

    scanf("%d",&n);
    counti=0;
    for(i=0;i<n;i++)
    {
        char S[107];
        scanf("%s",S);
        for(j=0;j<n;j++)
        {
            if(S[j]=='#')
            {
                table[i][j]=1;
            }
            else
            {
                table[i][j]=0;
                counti++;
            }

        }
    }

    if(counti%5!=0)
    {
        printf("NO\n");
        return 0;
    }

    solve(0,0);
//    printf(">>>%d\n",flag);
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
