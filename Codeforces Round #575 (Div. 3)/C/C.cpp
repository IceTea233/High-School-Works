#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

const int mask[4][2]=
{
    {-1, 0},
    { 0, 1},
    { 1, 0},
    { 0,-1}
};

int cmd[4];

int main()
{
    int i,j;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        int maxi_x=100000;
        int maxi_y=100000;
        int mini_x=-100000;
        int mini_y=-100000;
        for(i=0;i<n;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            for(j=0;j<4;j++)
            {
                scanf("%d",&cmd[j]);
            }
            if(!cmd[0])
                mini_x=max(mini_x,x);
            if(!cmd[1])
                maxi_y=min(maxi_y,y);
            if(!cmd[2])
                maxi_x=min(maxi_x,x);
            if(!cmd[3])
                mini_y=max(mini_y,y);
        }
        if(maxi_x>=mini_x && maxi_y>=mini_y)
        {
            printf("1 %d %d\n",maxi_x,maxi_y);
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
