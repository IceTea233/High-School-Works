#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,idx;
    int n;
    char S[10007];
    char ans[10007]={'\0'};

    scanf("%d",&n);
    scanf("%s",S);
    idx=0;
    j=0;
    i=0;
    while(j<n)
    {
        ans[idx++]=S[j];
        i++;
        j+=i;
    }
    printf("%s\n",ans);

	return 0;
}
