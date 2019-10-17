#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int room[17]={};
char s[100007];

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);
    scanf("%s",s);
    for( i=0; i<n; i++)
    {
        if(s[i] == 'L')
        {
            for( j=0; j<10; j++)
            {
                if(!room[j])
                {
                    room[j] = 1;
                    break;
                }
            }
        }
        else if(s[i] == 'R')
        {
            for( j=9; j>=0; j--)
            {
                if(!room[j])
                {
                    room[j] = 1;
                    break;
                }
            }
        }
        else
        {
            room[s[i]-'0'] = 0;
        }
    }
    for( i=0; i<10; i++)
    {
        printf("%d",room[i]);
    }
    printf("\n");

    return 0;
}
