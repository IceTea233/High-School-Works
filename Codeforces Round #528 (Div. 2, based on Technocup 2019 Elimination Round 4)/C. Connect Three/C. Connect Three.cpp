#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    pair<int,int>s[3];

    for(i=0;i<3;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        s[i]={x,y};
    }
    sort(s,s+3);
    vector<pair<int,int> >ans;
    for(i=s[0].first; i<=s[1].first; i++)
    {
        ans.push_back({i,s[0].second});
    }
    int flag=0;
    int tmp;

    if(s[1].second>s[0].second)
    {
        for(i=s[0].second+1;i<=s[1].second;i++)
        {
//            printf(">>>\n");
            ans.push_back({s[1].first,i});
            if(i==s[2].second)
            {
                flag=1;
                tmp=i;
            }
        }
    }
    else if(s[1].second<s[0].second)
    {
        for(i=s[0].second-1;i>=s[1].second;i--)
        {
            ans.push_back({s[1].first,i});
            if(i==s[2].second)
            {
                flag=1;
                tmp=i;
            }
        }
    }
    if(s[0].second==s[2].second)
    {
        flag=1;
        tmp=s[0].second;
    }

    if(!flag)
    {
        if(s[2].second>max(s[0].second,s[1].second))
        {
            for(i=max(s[0].second,s[1].second)+1;i<=s[2].second;i++)
            {
                ans.push_back({s[1].first,i});
            }
            tmp=s[2].second;
        }
        else
        {
            for(i=min(s[0].second,s[1].second)-1;i>=s[2].second;i--)
            {
                ans.push_back({s[1].first,i});
            }
            tmp=s[2].second;
        }
    }
    for(i=s[1].first+1;i<=s[2].first;i++)
    {
//        if(i!=s[1].first)
//        {
            ans.push_back({i,tmp});
//        }
    }
    printf("%d\n",ans.size());
    for(i=0;i<ans.size();i++)
    {
        printf("%d %d\n",ans[i].first,ans[i].second);
    }

    return 0;
}
