#include<cstdio>

int main()
{
    int i;
    int n;
    int s[107];

    scanf("%d",&n);
    int maxi=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]>maxi)
            maxi=s[i];
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=maxi-s[i];
    }
    printf("%d\n",sum);

    return 0;
}
