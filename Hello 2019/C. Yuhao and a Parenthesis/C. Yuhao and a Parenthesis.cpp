#include<bits/stdc++.h>

using namespace std;

int chart_L[500007]={0};
int chart_R[500007]={0};
char S[500007];

int main()
{
	int i,j;
	int n;

	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        scanf("%s",S);
        int c=0;
        for(j=0;S[j]!='\0';j++)
        {
            if(S[j]=='(')
                c++;
            else if(S[j]==')')
                c--;
        }
        if(c>=0)
        {
            bool flag=1;
            int check=0;
            for(j=0;S[j]!='\0';j++)
            {
                if(S[j]=='(')
                    check++;
                else if(S[j]==')')
                    check--;
                if(check<0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
//                printf("L:%d\n",c);
                chart_L[c]++;
            }

        }
        else
        {
            bool flag=1;
            int check=0;
            for(j=0;S[j]!='\0';j++)
            {
                if(S[j]=='(')
                    check++;
                else if(S[j]==')')
                    check--;
                if(check<c)
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                c*=-1;
//                printf("R:%d\n",c);
                chart_R[c]++;
            }

        }
    }
    int counti=0;
    for(i=1;i<500007;i++)
    {
        counti+=min(chart_L[i],chart_R[i]);
    }
    counti+=chart_L[0]/2;
    printf("%d\n",counti);

	return 0;
}
