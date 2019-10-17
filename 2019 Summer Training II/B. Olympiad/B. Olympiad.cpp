#include<bits/stdc++.h>

using namespace std;

bool chart[607]={};

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    int counti=0;
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a>0)
        {
            if(!chart[a])
            {
                chart[a]=1;
                counti++;
            }
        }
    }
    printf("%d\n",counti);


    return 0;
}
