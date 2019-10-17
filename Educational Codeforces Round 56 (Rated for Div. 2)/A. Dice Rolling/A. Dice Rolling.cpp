#include<cstdio>

using namespace std;

int main()
{
    int t,T;

    scanf("%d",&T);

    for(t=0;t<T;t++)
    {
        int a;
        scanf("%d",&a);
        printf("%d\n",a/7+(a%7>0));
    }

	return 0;
}
