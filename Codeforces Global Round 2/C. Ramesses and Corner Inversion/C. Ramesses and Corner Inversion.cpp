#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

bool mA[500][500];
bool mB[500][500];
bool mC[500][500];

int main()
{
	int i,j;
	int n,m;

	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mA[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mB[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            mC[i][j]=mA[i][j]^mB[i][j];
        }
    }
    bool flag=0;
    for(i=0;i<n;i++)
    {
        int counti=0;
        for(j=0;j<m;j++)
        {
            if(mC[i][j])
                counti++;
        }
        if(counti%2==1)
        {
            flag=1;
            break;
        }
    }
    for(i=0;i<m;i++)
    {
        int counti=0;
        for(j=0;j<n;j++)
        {
            if(mC[j][i])
                counti++;
        }
        if(counti%2==1)
        {
            flag=1;
            break;
        }
    }

    if(flag)
        printf("No\n");
    else
        printf("Yes\n");

	return 0;
}
