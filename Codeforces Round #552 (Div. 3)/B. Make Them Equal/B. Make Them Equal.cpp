#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

int arr[107];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    int maxi=-1;
    int mini=ULTRA;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    int yee=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=maxi && arr[i]!=mini)
        {
            if(!yee)
            {
                yee=arr[i];
            }
            else
            {
                if(arr[i]!=yee)
                {
                    yee=-1;
                    break;
                }
            }
        }
    }
    if(!yee)
    {
        if((maxi-mini)%2==0)
            printf("%d\n",(maxi-mini)/2);
        else
            printf("%d\n",maxi-mini);
    }
    else if(yee==-1)
    {
        printf("-1\n");
    }
    else
    {
        if(yee-mini==maxi-yee)
        {
            printf("%d\n",yee-mini);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
