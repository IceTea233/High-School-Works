#include<bits/stdc++.h>
#define ULTRA 2134567890
using namespace std;

struct pos
{
    int x;
    int y;
};

pos arr[107];
int maxi_x;
int mini_x;
int maxi_y;
int mini_y;

void reset()
{
    maxi_x=-ULTRA;
    mini_x= ULTRA;
    maxi_y=-ULTRA;
    mini_y= ULTRA;
}

bool check(int idx)
{
    if(arr[idx].x==maxi_x || arr[idx].x==mini_x)
    {
        if(mini_y<=arr[idx].y && arr[idx].y<=maxi_y)
            return 1;
    }
    else if(arr[idx].y==maxi_y || arr[idx].y==mini_y)
    {
        if(mini_x<=arr[idx].x && arr[idx].x<=maxi_x)
            return 1;
    }
    return 0;
}

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for(i=0;i<4*n+1;i++)
    {
        scanf("%d %d",&(arr[i].x),&(arr[i].y));
    }

    for(i=0;i<4*n+1;i++)
    {
        reset();
        for(j=0;j<4*n+1;j++)
        {
            if(j!=i)
            {
                maxi_x=max(maxi_x,arr[j].x);
                maxi_y=max(maxi_y,arr[j].y);
                mini_x=min(mini_x,arr[j].x);
                mini_y=min(mini_y,arr[j].y);
            }
        }
        bool flag=0;
        if(maxi_x-mini_x != maxi_y-mini_y)
            flag=1;
        for(j=0;j<4*n+1;j++)
        {
            if(j!=i && !check(j))
            {
                flag=1;
                break;
            }
        }
        if(!flag)
            break;
    }
    printf("%d %d\n",arr[i].x,arr[i].y);

    return 0;
}
