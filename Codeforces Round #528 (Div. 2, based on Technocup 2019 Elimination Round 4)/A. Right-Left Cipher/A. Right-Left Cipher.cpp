#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    char t[107];

    scanf("%s",t);
    deque<char>llist;
    for(i=0;t[i]!='\0';i++)
    {
        llist.push_back(t[i]);
    }
    vector<char>ans;
    for(i=0;!llist.empty();i++)
    {
        if(llist.size()%2==1)
        {
            ans.push_back(llist.front());
            llist.pop_front();
        }
        else
        {
            ans.push_back(llist.back());
            llist.pop_back();
        }
    }
    while(!ans.empty())
    {
        printf("%c",ans.back());
        ans.pop_back();
    }
    printf("\n");

    return 0;
}
