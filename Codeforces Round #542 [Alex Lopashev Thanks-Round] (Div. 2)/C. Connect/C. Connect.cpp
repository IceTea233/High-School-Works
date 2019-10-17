#include<bits/stdc++.h>

using namespace std;

struct pos
{
    int x;
    int y;
};

int world[57][57]={};
int road[57][57];
vector<pos>v1;
vector<pos>v2;

void make_road(int n)
{
    int i,j;
    memset(road,0,sizeof(road));
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            road[i][j]=world[i][j];
        }
    }
}

void DFS(pos p,vector<pos> &mem)
{
    if(road[p.x][p.y])
    {
        mem.push_back(p);
        road[p.x][p.y]=0;
        DFS({p.x-1,p.y  },mem);
        DFS({p.x+1,p.y  },mem);
        DFS({p.x  ,p.y-1},mem);
        DFS({p.x  ,p.y+1},mem);
    }
    return;
}

int main()
{
    int i,j;
    int n;
    int r1,c1;
    int r2,c2;
    char trash[7];

    scanf("%d",&n);
    scanf("%d %d",&r1,&c1);
    scanf("%d %d",&r2,&c2);
    fgets(trash,7,stdin);
    for(i=1;i<=n;i++)
    {
        char S[107];
        fgets(S,107,stdin);
        for(j=1;j<=n;j++)
        {
            if(S[j-1]=='0')
                world[i][j]=1;
            else
                world[i][j]=0;
        }
    }
//    for(i=1;i<=n;i++)
//    {
//        for(j=1;j<=n;j++)
//        {
//            printf("%d",world[i][j]);
//        }
//        printf("\n");
//    }

    make_road(n);
//    for(i=1;i<=n;i++)
//    {
//        for(j=1;j<=n;j++)
//        {
//            printf("%d",road[i][j]);
//        }
//        printf("\n");
//    }
    DFS({r1,c1},v1);
    make_road(n);
    DFS({r2,c2},v2);
    int mini=2134567890;
    for(auto it1:v1)
    {
        for(auto it2:v2)
        {
//            printf("(%d,%d)(%d,%d)",it1.x,it1.y,it2.x,it2.y);
            mini=min(mini,(it1.x-it2.x)*(it1.x-it2.x)+(it1.y-it2.y)*(it1.y-it2.y));
        }
    }
    printf("%d\n",mini);

    return 0;
}
