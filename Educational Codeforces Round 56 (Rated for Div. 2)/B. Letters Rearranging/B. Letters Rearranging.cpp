#include<cstdio>

using namespace std;

int main()
{
    int i,j;
    int T,t;

    scanf("%d",&T);

    for(t=0;t<T;t++)
    {
        int chart[107]={0};
        char S[1007];
        scanf("%s",S);
        for(i=0;S[i]!='\0';i++)
        {
            chart[S[i]-'a']++;
        }
        int counti=0;
        for(i=0;i<26;i++)
        {
            if(chart[i])
                counti++;
        }
        if(counti>1)
        {
            for(i=0;i<26;i++)
            {
                for(j=0;j<chart[i];j++)
                {
                    printf("%c",i+'a');
                }
            }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }
    }

	return 0;
}
