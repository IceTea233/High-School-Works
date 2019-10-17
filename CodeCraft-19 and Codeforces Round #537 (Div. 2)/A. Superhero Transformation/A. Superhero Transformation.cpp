#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    else
        return 0;
}

int main()
{
    int i,j;
    char S[1007];
    char T[1007];

    scanf("%s",S);
    scanf("%s",T);
    if(strlen(S)!=strlen(T))
        printf("No\n");
    else
    {
        bool flag=1;
        int len=strlen(S);
        for(i=0;i<len;i++)
        {
            if(isvowel(S[i])!=isvowel(T[i]))
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }


    return 0;
}
