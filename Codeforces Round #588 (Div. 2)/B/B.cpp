#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

char s[200007];

int main()
{
    int i,j;
    int n,k;

    scanf("%d %d",&n, &k);
    scanf("%s",s);
    if(k>0)
    {
        if(n==1)
        {
            s[0] = '0';
        }
        else
        {
            int cnt = 0;
            if(s[0]!='1')
            {
                s[0] = '1';
                cnt++;
            }

            for( i=1; i<n && cnt<k; i++)
            {
                if(s[i]!='0')
                {
                    s[i] = '0';
                    cnt++;
                }
            }
        }
    }
    printf("%s\n",s);

    return 0;
}
