#include<bits/stdc++.h>

using namespace std;

char WU[100007];
char trash[7];
int color[100007]={};

int main()
{
    int i,j;
    int n,q;

    scanf("%d %d",&n,&q);
    scanf("%s",WU);
    string book[4];
    while(q--)
    {
        int rel;
        char cmd,c;
        fgets(trash,7,stdin);
        scanf("%c %d",&cmd,&rel);
        if(cmd=='+')
        {
            scanf(" %c",&c);
            book[rel].push_back(c);
        }
        else if(cmd=='-')
        {
            book[rel].pop_back();
        }
        bool flag=0;
        bool taken[1000007]={};
        for(i=1;i<=3;i++)
        {
            int idx=0;
            for(j=0;j<n;j++)
            {
                if(!taken[j] && book[i][idx]==WU[j])
                {
                    taken[j]=1;
                    idx++;
                }
                if(idx>=book[i].size())
                    break;
            }
            if(idx<book[i].size())
            {
                flag=1;
                break;
            }
        }
        if(flag)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
