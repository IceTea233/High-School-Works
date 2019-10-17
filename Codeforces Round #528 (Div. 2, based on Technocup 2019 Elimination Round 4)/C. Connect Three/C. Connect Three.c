#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    pair<int,int>s[3];

    sort(s,s+3);
    for(i=0;i<3;i++)
    {
        printf("%d %d\n",s[i].first,s[i].second);
    }


    return 0;
}
