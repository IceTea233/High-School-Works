#include<bits/stdc++.h>

using namespace std;

int chart[1007]={};
char s[1007];
char t[1007];


int main()
{
    int i,j;
    int n,m,q;

    scanf("%d %d %d",&n,&m,&q);
    scanf("%s",s);
    scanf("%s",t);
    for(i=0;i<n;i++)
    {
        bool flag=0;
        for(j=0;j<m && i+j<=n;j++)
        {
            if(s[i+j]!=t[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            chart[i+1]=1;
        }
    }
    // for(i=1;i<=n;i++)
    //     printf("%d, ",chart[i]);
    // printf("\n");

    while(q--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        int counti=0;
        for(i=l;i+m-1<=r;i++)
        {
            if(chart[i])
                counti++;
        }
        printf("%d\n",counti);
    }

    return 0;
}
