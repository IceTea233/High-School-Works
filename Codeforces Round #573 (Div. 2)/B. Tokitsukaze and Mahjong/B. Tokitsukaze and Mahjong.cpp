#include<bits/stdc++.h>

using namespace std;

int chart[7][17]={};

char s[107];

int main()
{
    int i,j,k;

    for(i=0;i<3;i++)
    {
        scanf("%s",s);
        int num=s[0]-'0';
        // printf("%c %d\n",s[1],num);
        if(s[1]=='m')
            chart[0][num]++;
        else if(s[1]=='p')
            chart[1][num]++;
        else if(s[1]=='s')
            chart[2][num]++;
    }

    int mini=2;
    for(i=0;i<3;i++)
    {
        for(j=1;j<=9;j++)
        {
            mini=min(3-chart[i][j],mini);
        }
        for(j=1;j<=7;j++)
        {
            int tmp=0;
            for(k=0;k<3;k++)
            {
                if(chart[i][j+k])
                    tmp++;
            }
            mini=min(3-tmp,mini);
        }
    }
    printf("%d\n",mini);

    return 0;
}
