#include<bits/stdc++.h>

int c_x[1007]={0};
int c_y[1007]={0};
int r_x[1007];
int r_y[1007];

int mask[][2]={{-1,-1},
               {-1, 0},
               {-1, 1},
               { 0,-1},
               { 0, 1},
               { 1,-1},
               { 1, 0},
               { 1, 1}};

int main()
{
    int i,j;
    int k,x,y;
    int me_x,me_y;

    scanf("%d %d",&me_x,&me_y);
    for(i=1;i<=666;i++)
    {
        scanf("%d %d",&x,&y);
        r_x[i]=x;
        r_y[i]=y;
        c_x[x]++;
        c_y[y]++;
    }
    k=-1;
    x=-2;
    y=-2;
    do
    {
        if(k!=-1)
        {
            c_x[r_x[k]]--;
            c_y[r_y[k]]--;
            r_x[k]=x;
            r_y[k]=y;
            c_x[x]++;
            c_y[y]++;
        }
        int tag=-1;
        for(i=0;i<8;i++)
        {
            if(me_x+mask[i][0]>=1  &&
               me_x+mask[i][0]<=999&&
               me_y+mask[i][1]>=1  &&
               me_y+mask[i][1]<=999&&
               c_x[me_x+mask[i][0]]==0&&
               c_y[me_y+mask[i][1]]==0)
            {
                tag=i;
                break;
            }
        }
        if(tag==-1)
        {
            return -1;
        }
        me_x+=mask[tag][0];
        me_y+=mask[tag][1];

        printf("%d %d\n",me_x,me_y);
        fflush(stdout);
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==-1)
            return 0;
        if(a==0)
            return -1;

        k=a;
        x=b;
        y=c;
    }while(k>0);

}
