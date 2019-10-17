#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int n,k;
    int x;
    int flag=0;

    scanf("%d %d",&n,&k);
    x=k;
    while((x/k)*(x%k)!=n)
    {
        if(n%(x/k)!=0)
        {
            x+=k;
        }
        else
        {
            x++;
        }
//        printf("x==%d\n",x);
//        system("PAUSE");
    }
    printf("%d\n",x);

    return 0;
}
