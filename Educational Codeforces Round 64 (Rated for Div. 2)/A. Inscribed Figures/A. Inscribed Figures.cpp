#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

int arr[1007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int counti=0;
    bool flag=0;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==1)
        {
            if(arr[i+1]==2)
            {
                if(i-1>=0 && arr[i-1]==3)
                    counti+=2;
                else
                    counti+=3;
            }
            else if(arr[i+1]==3)
                counti+=4;
        }
        else if(arr[i]==2)
        {
            if(arr[i+1]==1)
            {
                counti+=3;
            }
            else if(arr[i+1]==3)
            {
                flag=1;
            }
        }
        else if(arr[i]==3)
        {
            if(arr[i+1]==1)
            {
                counti+=4;
            }
            else if(arr[i+1]==2)
            {
                flag=1;
            }
        }
    }

    if(flag)
        printf("Infinite\n");
    else
    {
        printf("Finite\n");
        printf("%d\n",counti);
    }


    return 0;
}
