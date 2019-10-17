#include<bits/stdc++.h>
#define LLI long long int

using namespace std;

struct info
{
    int key;
    int num;
};


int p[107];
int s[107];

int maxi[107]={0};

int main()
{
    int i,j;
    int n,m,k;

    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&s[i]);
    }

    int counti=0;
    while(k--)
    {
        int c;
        scanf("%d",&c);
        bool flag=0;
        for(i=1;i<=n;i++)
        {
            if(s[i]==s[c] && p[c]<p[i])
            {
//                printf("ouch! i=%d\n",i);
                flag=1;
                break;
            }
        }
        if(flag)
            counti++;
    }
    printf("%d\n",counti);

    return 0;
}
