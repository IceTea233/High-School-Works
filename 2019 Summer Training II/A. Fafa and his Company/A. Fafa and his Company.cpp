#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    int counti=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            counti++;
    }
    printf("%d\n",counti);
    

    return 0;
}
