#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
using namespace std;

char S[107];
int counti[107];

int main()
{
    int i,j;
    int T;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",S);
        int len=strlen(S);
//        sort(S,S+len);
//        printf("%s\n",S);
        memset(counti,0,sizeof(counti));
        for(i=0;i<len;i++)
        {
            counti[S[i]-'a']++;
        }
        int tmp=0;
        int maxi=0;
        int total=0;
        for(i=0;i<26;i++)
        {
            if(counti[i])
            {
                int tmp2=0;
                while(i<26 && counti[i])
                {
                    i++;
                    tmp2++;

                }
                tmp++;
                total+=tmp2;
                maxi=max(maxi,tmp2);
            }

        }
//        printf(">>>%d %d %d",tmp,total,maxi);
        if(tmp==1 && 1<maxi && maxi<=3)
        {
            printf("No answer\n");
        }
        else if(tmp==2 && total==3 && maxi==2)
        {
            int keep;
            for(i=0;i<26;i++)
            {
                if(counti[i] && counti[i+1])
                {
                    for(j=0;j<counti[i];j++)
                    {
                        printf("%c",'a'+i);
                    }
                    counti[i]=0;
                    keep=i+1;
                    break;
                }
            }

            for(i=0;i<26;i++)
            {
                if(counti[i] && i!=keep)
                {
                    for(j=0;j<counti[i];j++)
                    {
                        printf("%c",'a'+i);
                    }
                }
            }
            for(j=0;j<counti[keep];j++)
            {
                printf("%c",'a'+keep);
            }
            printf("\n");
        }
        else
        {
            bool flag=0;
            for(i=0;i<26;i++)
            {
                if(counti[i])
                {
                    if(flag)
                    {
                        for(j=0;j<counti[i];j++)
                        {
                            printf("%c",'a'+i);
                        }
                        flag=0;
                    }
                    else
                    {
                        flag=1;
                    }
                }

            }
            flag=1;
            for(i=0;i<26;i++)
            {
                if(counti[i])
                {
                    if(flag)
                    {
                        for(j=0;j<counti[i];j++)
                        {
                            printf("%c",'a'+i);
                        }
                        flag=0;
                    }
                    else
                    {
                        flag=1;
                    }
                }

            }
            printf("\n");
        }
    }


    return 0;
}
