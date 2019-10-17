#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
	int n,k;
	int s[10007]={0};

	scanf("%d %d",&n,&k);

	int digit=0;
	priority_queue<int>a;
	for(i=0; (1<<i)<=n;i++)
    {
        if(n&(1<<i))
        {
            digit+=1;
            s[i]=1;
            a.push(1<<i);
        }
    }
//    printf("%d\n",digit);
    if(k<digit || k>n)
        printf("NO\n");
    else
    {
        printf("YES\n");
        int quota=k-digit;
        for(i=0;i<quota;i++)
        {
            int tmp=a.top();
            a.pop();
            a.push(tmp/2);
            a.push(tmp/2);
        }
        for(i=0;i<k;i++)
        {
            printf("%d ",a.top());
            a.pop();
        }
    }


	return 0;
}
