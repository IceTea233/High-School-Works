#include<bits/stdc++.h>

using namespace std;

struct info
{
    int key;
    int cmd;
};

bool operator<(info a,info b)
{
    if(a.key==b.key)
        return a.cmd<b.cmd;
    else
        return a.key<b.key;
}

int main()
{
    int i,j;
    int n;
    int trash;
    int tmp[3];

    scanf("%d",&n);
    vector<info>keep;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d %d",&trash,&tmp[j]);
        }
        sort(tmp,tmp+3);
        keep.push_back({tmp[0],1});
        keep.push_back({tmp[2],2});
    }
    sort(keep.begin(),keep.end());
    int counti=0;
    int maxi=0;
    for(auto it:keep)
    {
        if(it.cmd==1)
            counti++;
        else
            counti--;
        maxi=max(counti,maxi);
    }
    printf("%d\n",maxi);

    return 0;
}
