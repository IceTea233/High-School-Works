#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j;
	int n;
	char m[1007][1007];

	scanf("%d",&n);
	int counti=0;
	for(i=0;i<n;i++)
    {
        scanf("%s",m[i]);
    }
    for(i=0;i<n-2;i++)
    {
        for(j=0;j<n-2;j++)
        {
            if(m[i  ][j  ]=='X' && m[i  ][j+2]=='X' &&
               m[i+1][j+1]=='X' &&
               m[i+2][j  ]=='X' && m[i+2][j+2]=='X')
                counti++;
        }
    }
    printf("%d\n",counti);

	return 0;
}
