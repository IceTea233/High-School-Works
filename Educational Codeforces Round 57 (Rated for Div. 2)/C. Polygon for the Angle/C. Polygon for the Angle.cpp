#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int T;

    scanf("%d",&T);

    while(T--)
    {
        int ang;
        scanf("%d",&ang);

        int flag=0;
        int ans=-1;
        for(i=3;i<=360;i++)
        {
            if(360%i==0)
            {
                int d=360/i;
                for(j=d;j<360-d;j+=d)
                {
                    if(j%2==0 && j/2==ang)
                    {
                        flag=1;
                        ans=i;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }
        printf("%d\n",ans);
    }

    return 0;
}
