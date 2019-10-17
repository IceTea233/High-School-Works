#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define MOD 1000000000000007

using namespace std;

char s[1000007];
string dic[100007];
LLI hashe[1000007];

int main()
{
    int i,j;
    int n;
    scanf("%d",&n);
    for( i=0; i<n;i++)
    {
        scanf("%s",s);
        dic[i] = s;
    }

    string yee = dic[0];

    for( i=1; i<n; i++)
    {
        int len_0 = yee.size();
        int len_1 = dic[i].size();
        LLI key0 = 0;
        LLI key1 = 0;
        LLI mul = 1;
        int tag = -1;
        for( j=0; j<len_0 && j<len_1; j++)
        {
            key0 += yee[len_0-j-1]*mul;
            key0 %= MOD;
            mul *= 131;
            mul %= MOD;

            key1 *= 131;
            key1 += dic[i][j];
            key1 %= MOD;
            if(key0 == key1)
            {
                tag = j;
            }
        }

        // printf("tag = %d\n",tag);
        for( j = tag+1; j<len_1; j++)
        {
            yee.push_back(dic[i][j]);
        }
    }
    cout<<yee<<"\n";

    return 0;
}
