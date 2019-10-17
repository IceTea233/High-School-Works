#include<bits/stdc++.h>
using namespace std;
#define LLI long long int

int main()
{
    int i,j;
    int n,k;
    LLI A,B;

    scanf("%d %d %I64d %I64d",&n,&k,&A,&B);

    LLI len=(pow(2,n)+0.5);
//    printf("%d\n",len);
    vector<LLI>keep;
    map<int,int>mp;
    for(i=0;i<k;i++)
    {
        int a;
        scanf("%d",&a);
        if(mp[a]==0)
        {
            keep.push_back(a);
        }
        mp[a]++;
    }
    keep.push_back(0);
    keep.push_back(len+1);
    sort(keep.begin(),keep.end());
    int counti=0;
    for(i=1;i<keep.size();i++)
    {
//        printf("now>>>%d\n",i);
//        system("PAUSE");
        int now=keep[i-1];
        int next=keep[i];
        LLI pace=1;
        while(now!=0 && now%(pace*2)==0)
        {
//            printf("pace==%d\n",pace);
            pace*=2;
        }

//        printf("check\n");
        while(now+pace<=next)
        {
            now+=pace;
            counti++;
            pace*=2;
        }
        while(pace>0)
        {
            if(now+pace<=next)
            {
                now+=pace;
                counti++;
            }
            else
            {
                pace/=2;
            }
        }
        counti--;
    }
//    printf("count==%d\n",counti);
    LLI total=(LLI)counti*A;
    for(auto it:keep)
    {
        total+=(LLI)mp[it]*B;
    }
    printf("%I64d\n",total);

    return 0;
}
