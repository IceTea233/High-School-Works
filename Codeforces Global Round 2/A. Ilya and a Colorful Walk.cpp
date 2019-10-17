#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int color[300007];
int arr[300007];
int visit[300007]={};

int main()
{
	int i,j;
	int n;

	scanf("%d",&n);

	vector<int>keep;
	for(i=0;i<n;i++)
    {
        scanf("%d",&color[i]);
    }
    int a1=n-1;
    int a2;
    for(i=n-1;i>=0;i--)
    {
        if(color[i]!=color[a1])
        {
            a2=i;
            break;
        }
    }
    int maxi=0;
    for(i=0;i<n;i++)
    {
        if(color[i]==color[a1])
            maxi=max(a2-i,maxi);
        else
            maxi=max(a1-i,maxi);
    }
    printf("%d\n",maxi);

	return 0;
}
