#include<bits/stdc++.h>

//unsolved

using namespace std;

bool mtx[5207][5207];
int n,m;

int c_to_h(char c)
{
    if(isdigit(c))
        return c-'0';
    else
        return 10+c-'A';
}

bool same_row(int a,int b)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(mtx[a][i]!=mtx[b][i])
            return 0;
    }
    return 1;
}
bool same_cal(int a,int b)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(mtx[i][a]!=mtx[i][b])
            return 0;
    }
    return 1;
}

int main()
{
    int i,j,h;

    char trash[7];

    scanf("%d",&n);
    fgets(trash,7,stdin);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/4;j++)
        {
            char input;
            scanf("%c",&input);
            for(h=0;h<4;h++)
            {
                mtx[i][j*4+h]=((c_to_h(input)>>(3-h))&1);
            }
        }
        fgets(trash,7,stdin);
    }

    vector<int>keep;
    int ans;
    int counti=1;
    for(i=1;i<n;i++)
    {
        if(same_row(i,i-1))
            counti++;
        else
        {
            keep.push_back(counti);
            counti=1;
        }
    }
    keep.push_back(counti);
    ans=keep[0];
    for(i=1;i<keep.size();i++)
        ans=__gcd(keep[i],ans);
    keep.clear();
    counti=1;
    for(i=1;i<n;i++)
    {
        if(same_cal(i,i-1))
            counti++;
        else
        {
            keep.push_back(counti);
            counti=1;
        }
    }
    keep.push_back(counti);
//    printf("test\n");
    ans=__gcd(ans,keep[0]);
    for(i=1;i<keep.size();i++)
        ans=__gcd(keep[i],ans);
    printf("%d\n",ans);

    return 0;
}
