#include<bits/stdc++.h>

using namespace std;

char s[107];

int main()
{
	int i,j;
    int n;

    scanf("%d",&n);
    scanf("%s",s);
    int zeros=0,ones=0;
    for(i=0;s[i];i++)
    {
        if(s[i]=='0')
            zeros++;
        else
            ones++;
    }
    if(zeros==ones)
    {
        printf("2\n");
        printf("%c ",s[0]);
        for(i=1;s[i];i++)
            printf("%c",s[i]);
        printf("\n");
    }
    else
    {
        printf("1\n");
        printf("%s\n",s);
    }

	return 0;
}
