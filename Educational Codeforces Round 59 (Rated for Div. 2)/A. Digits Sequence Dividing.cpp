#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int n;
    int q;

    scanf("%d",&q);
    while(q--)
    {
        char s[10007];
        scanf("%d",&n);
        scanf("%s",s);

        if(n==2)
        {

            if(s[0]>=s[1])
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
                printf("2\n");
                printf("%c %c\n",s[0],s[1]);
            }
        }
        else
        {
            printf("YES\n");
            printf("2\n");
            printf("%c ",s[0]);
            for(i=1;s[i]!='\0';i++)
            {
                printf("%c",s[i]);
            }
            printf("\n");
        }

    }






    return 0;
}
