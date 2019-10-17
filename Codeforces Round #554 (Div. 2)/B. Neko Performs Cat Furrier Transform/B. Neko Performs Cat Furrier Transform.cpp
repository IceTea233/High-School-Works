#include<bits/stdc++.h>

using namespace std;

int power(int x,int y)
{
    int i;
    int n=1;
    for(i=0;i<y;i++)
    {
        n*=x;
    }
    return n;
}

int main()
{
    int i,j;
    int x;

    scanf("%d",&x);
    vector<int>keep;
    int t=0;
    for(i=20;!(x>>i)&1;i--);
    for(;i>0;i--)
    {
        if(!((x>>(i-1)&1)))
        {
            keep.push_back(i);
            t++;
            x^=(power(2,i)-1);
            if((x&(power(2,i)-1))==(power(2,i)-1))
            {
                break;
            }
            x+=1;
            t++;
        }
    }
    printf("%d\n",t);
    for(auto it:keep)
    {
        printf("%d ",it);
    }
    printf("\n");

    return 0;
}
