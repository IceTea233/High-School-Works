#include<bits/stdc++.h>

using namespace std;

int findi(int,int);

int s[200007][3];

int main()
{
    int i;
	int n;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
        scanf("%d",&s[i][1]);
        scanf("%d",&s[i][2]);
    }
    vector<int>ans;
    int now,next,hop;

    now=1;
    if( findi(s[now][1],s[now][2]) )
    {
        hop=s[now][1];
        next=s[now][2];
    }
    else
    {
        hop=s[now][2];
        next=s[now][1];
    }
    ans.push_back(now);
    for(i=1;i<n;i++)
    {
        int tmp;
        if(s[next][1]!=hop)
        {
            tmp=s[next][1];
        }
        else
        {
            tmp=s[next][2];
        }
        now=next;
        next=hop;
        hop=tmp;
//        printf(">>>%d\n",tmp);
        ans.push_back(now);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ans[i]);
    }

	return 0;
}

int findi(int a,int b)
{
    if(a==s[b][1] || a==s[b][2])
        return 1;
    else
        return 0;
}
