#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

char S[300007];
char ans[300007]={};

int main()
{
    int i,j;
    int len;

    scanf("%d",&len);
    scanf("%s",S);
    strcpy(ans,S);

    if(len%2==1)
    {
        printf(":(\n");
    }
    else
    {
        int L=0,R=0,U=0;
        for(i=0;i<len;i++)
        {
            if(ans[i]=='(')
                L++;
            else if(ans[i]==')')
                R++;
            else if(ans[i]=='?')
                U++;
        }
        if(abs(L-R)>U)
        {
            printf(":(\n");
            return 0;
        }

//        printf("%d %d %s\n",L,R,ans);

        if(L<R)
        {
            for(i=0;L<R;i++)
            {
                if(ans[i]=='?')
                {
                    ans[i]='(';
                    L++;
                }
            }
        }
        else if(L>R)
        {
            for(i=len-1;L>R;i--)
            {
                if(ans[i]=='?')
                {
                    ans[i]=')';
                    R++;
                }
            }
        }

//        printf(">>>%s\n",ans);
//        printf("%s\n",S);
        for(i=0,j=len-1;i<len;i++)
        {
            if(ans[i]=='?')
            {
                for(;ans[j]!='?';j--);
                ans[i]='(';
                ans[j]=')';
            }
        }

//        printf("%s\n",ans);

        bool flag=0;
        int counti=0;

        if(ans[0]=='(')
            counti++;
        else if(ans[0]==')')
            counti--;

        for(i=1;i<len-1;i++)
        {
            if(ans[i]=='(')
                counti++;
            else if(ans[i]==')')
                counti--;
            if(counti<=0)
            {
                flag=1;
                break;
            }
        }

        if(ans[i]=='(')
            counti++;
        else if(ans[i]==')')
            counti--;

//        printf("%d\n",counti);
        if( flag || counti!=0)
            printf(":(\n");
        else
            printf("%s\n",ans);
    }


    return 0;
}
