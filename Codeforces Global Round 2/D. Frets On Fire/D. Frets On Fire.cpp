#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 1123456789012345678

using namespace std;

LLI s[100007];

int main()
{
	int i,j;
	int n;

	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        scanf("%I64d",&s[i]);
    }
    sort(s,s+n);

    vector<LLI>yee;
    vector<LLI>dog;

    for(i=0;i<n-1;i++)
    {
        yee.push_back(s[i+1]-s[i]);
    }
    yee.push_back(ULTRA);
    sort(yee.begin(),yee.end());

    LLI total=0;
    for(i=0;i<yee.size();i++)
    {
        total+=yee[i];
        dog.push_back(total);
    }
	int q;
	scanf("%d",&q);
	while(q--)
    {
        LLI l,r;
        scanf("%I64d %I64d",&l,&r);
        LLI m=r-l;
        auto it=lower_bound(yee.begin(),yee.end(),m);
        printf(">>>%I64d\n",*it);
        printf("%I64d\n",dog[it-yee.begin()]);
    }

	return 0;
}
