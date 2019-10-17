#include<bits/stdc++.h>

using namespace std;

char s[200007];
char t[200007];
vector<int> chart[107];
int idx[107]={};

int main()
{
    int i,j;
    int n,m;

    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        chart[ s[i]-'a' ].push_back(i+1);
    }
    scanf("%d",&m);
    while(m--)
    {
        scanf("%s",t);
        memset(idx,0,sizeof(idx));
        int maxi=0;
        for(i=0;t[i];i++)
        {
            int x=t[i]-'a';
            maxi=max(maxi,chart[x][idx[x]++]);
        }
        printf("%d\n",maxi);
    }

    return 0;
}
