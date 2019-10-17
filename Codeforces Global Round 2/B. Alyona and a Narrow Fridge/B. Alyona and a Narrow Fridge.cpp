#include<bits/stdc++.h>

using namespace std;

int a[1007];

int main()
{
    int i,j;
    int n,h;

    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    multiset<int,greater<int> >bst;
    for(i=0;i<n;i++)
    {
        bst.insert(a[i]);
        auto it=bst.begin();
        auto it_f=bst.end();
        int p=0;
        int r=h;
        while(it!=it_f)
        {
            if(p==0)
                r-=*it;
            p=!p;
            it++;
        }
//        printf(">>>%d\n",r);
        if(r<0)
            break;
    }
    printf("%d\n",i);

    return 0;
}
