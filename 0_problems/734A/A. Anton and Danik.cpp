#include<cstdio>

int main()
{
    int i;
    int n;
    int A=0,D=0;
    char suffix;

    scanf("%d%c",&n,&suffix);
    for(i=0;i<n;i++)
    {
        char c;
        scanf("%c",&c);
        if(c=='A')
            A++;
        else if(c=='D')
            D++;
    }
    if(A>D)
        printf("Anton\n");
    else if(A<D)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;
}
