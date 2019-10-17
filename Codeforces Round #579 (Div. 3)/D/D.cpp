#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define MOD 1000000007

using namespace std;

char s[200007];
char t[200007];
int check[200007];

int main()
{
    int i,j;

    scanf("%s",s);
    scanf("%s",t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    int maxi = 0;
    for( i=0,j=0; j<len_t; i++)
    {
        if(s[i]==t[j])
            j++;
    }
    maxi = max( maxi, len_s-i);
    for( i=len_s-1, j=len_t-1; j>=0;i--)
    {
        if(s[i]==t[j])
        {
            check[j] = i;
            j--;
        }
    }

    for( i=0,j=0; j<len_t; i++)
    {
        maxi = max(maxi, check[j] - i);
        // printf(">>>%d\n",check[j] - i);
        if(s[i] == t[j])
            j++;
    }
    printf("%d\n",maxi);

    return 0;
}
