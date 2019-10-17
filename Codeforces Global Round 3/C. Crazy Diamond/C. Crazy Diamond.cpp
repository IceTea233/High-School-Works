#include<bits/stdc++.h>
#define LLI long long int

using namespace std;

struct mov
{
    int a;
    int b;
};

int p[1000007];
int pos[1000007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
        pos[p[i]]=i;
    }

//    for(i=1;i<=n;i++)
//    {
//        printf(">>>>%d\n",pos[i]);
//    }

    vector<mov>keep;
    int tmp_1;
    int tmp_2;
    for(i=n-1;i>n/2;i--)
    {
        if(p[i]!=i)
        {
            if(pos[i]!=1)
            {
                if(pos[i]<=n/2)
                {
                    keep.push_back({pos[i],n});
                    tmp_1=pos[i];
                    tmp_2=n;
                    swap(pos[i],pos[ p[n] ]);
                    swap(p[tmp_1],p[tmp_2]);
//                    printf("1>>>");
//                    for(j=1;j<=n;j++)
//                    {
//                        printf("%d ",p[j]);
//                    }
//                    printf("\n");
                }
                keep.push_back({1,pos[i]});
                tmp_1=1;
                tmp_2=pos[i];
                swap(pos[ p[1] ],pos[i]);
                swap(p[tmp_1],p[tmp_2]);
//                printf("2>>>");
//                for(j=1;j<=n;j++)
//                {
//                    printf("%d ",p[j]);
//                }
//                printf("\n");
            }

            keep.push_back({1,i});
            tmp_1=1;
            tmp_2=i;
            swap(pos[ p[1] ],pos[ p[i] ]);
            swap(p[tmp_1],p[tmp_2]);
//            printf("3>>>");
//            for(j=1;j<=n;j++)
//            {
//                printf("%d ",p[j]);
//            }
//            printf("\n");
        }
    }
//    for(i=1;i<=n;i++)
//    {
//        printf("%d ",p[i]);
//    }
//    printf("\n");

    for(i=n/2;i>0;i--)
    {
        if(p[i]!=i)
        {
            if(pos[i]!=n)
            {
                keep.push_back({pos[i],n});
                tmp_1=pos[i];
                tmp_2=n;
                swap(pos[i],pos[ p[n] ]);
                swap(p[tmp_1],p[tmp_2]);
//                printf("1>>>");
//                for(j=1;j<=n;j++)
//                {
//                    printf("%d ",p[j]);
//                }
//                printf("\n");
            }
            keep.push_back({i,n});
            tmp_1=i;
            tmp_2=n;
            swap(pos[ p[i] ],pos[ p[n] ]);
            swap(p[tmp_1],p[tmp_2]);
//            printf("2>>>");
//            for(j=1;j<=n;j++)
//            {
//                printf("%d ",p[j]);
//            }
//            printf("\n");
        }
    }
//    for(i=1;i<=n;i++)
//    {
//        printf("%d ",p[i]);
//    }
//    printf("\n");
    printf("%d\n",keep.size());
    for(auto it:keep)
    {
        printf("%d %d\n",it.a,it.b);
    }

    return 0;
}
