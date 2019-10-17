#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

vector<int>start[5007];
int idx[5007];
int have[5007]={0};

int main()
{
    int i,j;
    int n,m;

    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        start[a].push_back(b);
    }
    for(i=1;i<=n;i++)
    {
        if(!start[i].empty())
            sort(start[i].begin(),start[i].end(),greater<int>());
    }

    for(j=1;j<=n;j++)
    {
        int c=0;
        int sec=-1;
        int pos=j;
        for(i=1;i<=n;i++)
        {
            idx[i]=0;
        }
        while(c<m)
        {
            sec++;
            if(have[pos])
            {
                printf("<<<(%d,%d)\n",pos,have[pos]);
                c+=have[pos];
                have[pos]=0;
            }
            if(idx[pos]<start[pos].size())
            {
//                printf("cmp:%d,%d\n",idx[pos],start[pos].size());
                printf(">>>(%d,%d)\n",pos,start[pos][idx[pos]]);
                have[start[pos][idx[pos]]]++;
                idx[pos]++;
            }
//            printf("check %d\n",c);
//            system("PAUSE");
            pos++;
            if(pos>n)
                pos=1;
        }
        printf("%d ",sec);
        system("PAUSE");
    }


    return 0;
}
