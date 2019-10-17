#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

vector<LLI>keep1;
vector<LLI>keep2;

char s[107];

int main()
{
    int i,j;
    int a,b,c;
    int m;

    scanf("%d %d %d",&a,&b,&c);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        LLI val;
        scanf("%I64d %s",&val,s);
        if(s[0]=='U')
            keep1.push_back(val);
        else
            keep2.push_back(val);
    }
    sort(keep1.begin(),keep1.end(),greater<LLI>());
    sort(keep2.begin(),keep2.end(),greater<LLI>());
    // for(auto it:keep1)
    //     printf("%I64d, ",it);
    // printf("\n");
    // for(auto it:keep2)
    //     printf("%I64d, ",it);
    // printf("\n");
    LLI money=0;
    int counti=0;
    for(i=0;i<a;i++)
    {
        if(!keep1.empty())
        {
            counti++;
            money+=keep1.back();
            keep1.pop_back();
        }
    }
    for(i=0;i<b;i++)
    {
        if(!keep2.empty())
        {
            counti++;
            money+=keep2.back();
            keep2.pop_back();
        }
    }

    for(i=0;i<c;i++)
    {
        if(!keep1.empty() && !keep2.empty())
        {
            if(keep1.back()<=keep2.back())
            {
                counti++;
                money+=keep1.back();
                keep1.pop_back();
            }
            else
            {
                counti++;
                money+=keep2.back();
                keep2.pop_back();
            }
        }
        else if(!keep1.empty())
        {
            counti++;
            money+=keep1.back();
            keep1.pop_back();
        }
        else if(!keep2.empty())
        {
            counti++;
            money+=keep2.back();
            keep2.pop_back();
        }
    }
    printf("%d %I64d\n",counti,money);

    return 0;
}
