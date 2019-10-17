#include<bits/stdc++.h>

using namespace std;

char S[107];

int main()
{
    int i,j;
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        scanf("%s",S);
        int mini=2134567890;
        for(i=0;i<n;i++)
        {
            if(S[i]=='<')
            {
                mini=min(mini,n-(i+1));
            }
            else if(S[i]=='>')
            {
                mini=min(mini,i);
            }
        }
        printf("%d\n",mini);
    }


    return 0;
}
