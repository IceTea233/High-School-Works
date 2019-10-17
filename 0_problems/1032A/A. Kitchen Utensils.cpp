#include<cstdio>

int main()
{
    int i,j;
    int n,k;
    int s[107]={0};

    scanf("%d %d",&n,&k);
    int max=0;
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        s[a]++;
        if(s[a]>max)
            max=s[a];
    }
    int dish=max/k;
    if(max%k>0)
        dish++;
    int kind=0;
    for(i=1;i<=100;i++)
    {
        if(s[i])
        {
            kind++;
        }
    }
    int sum=dish*kind*k-n;
    printf("%d\n",sum);

    return 0;
}
