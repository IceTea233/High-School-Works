#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int main()
{
    int i,j;
    int n;
    int me;
    int team=0;

    scanf("%d",&n);
    int total=0;
    scanf("%d",&me);
    total+=me;
    team+=me;
    vector<int>keep;
    for(i=2;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        if(me>=a*2)
        {
            keep.push_back(i);
            team+=a;
        }
        total+=a;
    }

    if(team>total/2)
    {
        printf("%d\n",keep.size()+1);
        printf("1 ");
        for(auto it:keep)
            printf("%d ",it);
        printf("\n");
    }
    else
        printf("0\n");

    return 0;
}
