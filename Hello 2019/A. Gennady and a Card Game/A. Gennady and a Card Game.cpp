#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
	char given[7];
	char hand[7][7];

	scanf("%s",given);
	for(i=0;i<5;i++)
    {
        scanf("%s",hand[i]);
    }
    bool flag=0;
    for(i=0;i<5;i++)
    {
        if(hand[i][0]==given[0] || hand[i][1]==given[1])
            flag=1;
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");

	return 0;
}
