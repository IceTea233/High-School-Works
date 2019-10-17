#include<bits/stdc++.h>

using namespace std;
int counti=0;
int k;
bool flag=0;
vector<int>keep;
void func(int idx,int goal,int sum)
{
    if(sum>10)
        return;
    if(idx>goal)
    {
        if(sum==10)
        {
            counti++;
            if(counti==k)
                flag=1;
        }
        return;
    }

    int i;
    for(i=0;i<=9;i++)
    {
        keep.push_back(i);
        func(idx+1,goal,sum+i);
        if(flag)
            return;
        keep.pop_back();
    }
}

int main()
{
    int i,j;


    scanf("%d",&k);
    func(0,10000,0);
    int flag=0;
    for(i=0;i<keep.size();i++)
    {
        if(flag)
            printf("%d",keep[i]);
        else
        {
            if(keep[i]!=0)
            {
                flag=1;
                printf("%d",keep[i]);
            }
        }
    }
    printf("\n");

    return 0;
}
