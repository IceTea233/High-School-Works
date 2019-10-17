#include<bits/stdc++.h>

struct data
{
    int key;
    char S[1007];
};

using namespace std;

int main()
{
    int i,j,k;
	int n;
	char ans[1007]={'\0'};
	data s[1007];
	data tmp;
	int chart[1007]={0};
	int check[1007]={0};
	int key[1007];

	scanf("%d",&n);
	for(i=0;i<2*n-2;i++)
    {
        scanf("%s",(s[i].S));
        s[i].key=i;
    }
    for(i=0;i<2*n-2;i++)
    {
        for(j=2*n-2-1;j>i;j--)
        {
            if(strcmp(s[j].S,s[j-1].S)<0)
            {
                tmp=s[j];
                s[j]=s[j-1];
                s[j-1]=tmp;
            }
        }
    }
    for(i=0;i<2*n-2;i++)
    {
//        printf("%d %s\n",s[i].key,s[i].S);
        int len=strlen(s[i].S);
        if(check[len])
        {
            chart[s[i].key]=2;
        }
        else
        {
            chart[s[i].key]=1;
            check[len]=1;
        }
    }
    for(i=0;i<2*n-2;i++)
    {
        if(chart[i]==1)
            printf("P");
        else
            printf("S");
    }
    printf("\n");

	return 0;
}
