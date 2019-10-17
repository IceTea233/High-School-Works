#include<bits/stdc++.h>
#define LLI long long int
using namespace std;

int main()
{
	int i,j;
	int n;
	vector<int>keep;

	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        keep.push_back(a);
    }
    sort(keep.begin(),keep.end());

    deque<int>deq;
    int maxi=0;
    for(auto it:keep)
    {
//        printf(":D>>>%d\n",it);
        while(!deq.empty() && it-deq.front()>5)
        {
            deq.pop_front();
        }
        deq.push_back(it);
        if(deq.size()>maxi)
            maxi=deq.size();
//        printf(">>>%d\n",maxi);
    }
    printf("%d\n",maxi);

	return 0;
}
