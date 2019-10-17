#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
	int n;
	int s[10007];
	queue<int>que;

	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    que.push(0);
	for(i=0;i<n;i++)
    {
        int len=que.size();
        for(j=0;j<len;j++)
        {
            int x=que.front();
            que.push((x+s[i]+360)%360);
            que.push((x-s[i]+360)%360);
            que.pop();
        }
    }
    bool flag=0;
    while(!que.empty())
    {
        if(que.front()==0)
            flag=1;
        que.pop();
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");

	return 0;
}
