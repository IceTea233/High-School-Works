#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

char s[107];

int main()
{
    int i,j;

    scanf("%s",s);

    int len = strlen(s);

    int add = -1;
    for( i=1; i<len; i++)
    {
        if(s[i]=='1')
            add = 0;
    }

    if(len%2==1)
    {
        printf("%d\n",1+(len-1)/2+add);
    }
    else
    {
        printf("%d\n",1+(len-1)/2);
    }

    return 0;
}
