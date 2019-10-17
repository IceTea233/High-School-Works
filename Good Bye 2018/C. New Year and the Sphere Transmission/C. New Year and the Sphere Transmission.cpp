#include<bits/stdc++.h>

#define LLI long long int

using namespace std;

vector<LLI>a;
set<LLI>b;

int main()
{
	int i;
	int n;

	scanf("%I64d",&n);
	for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
            a.push_back(i);
    }
    for(i=0;i<a.size();i++)
    {
        LLI top=n-a[i]+1;
        LLI len=n/a[i];
        LLI x=(top+1)*len/2;

        b.insert(x);
        LLI ant=n/a[i];
        top=n-ant+1;
        len=n/ant;
        x=(top+1)*len/2;

        b.insert(x);
    }
    set<LLI>::iterator iter,head,rear;
    head=b.begin();
    rear=b.end();
    for(iter=head;iter!=rear;iter++)
    {
        printf("%I64d ",*iter);
    }
    printf("\n");

	return 0;
}
