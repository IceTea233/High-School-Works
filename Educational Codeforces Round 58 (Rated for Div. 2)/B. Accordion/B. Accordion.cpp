#include<bits/stdc++.h>

using namespace std;

char S[500007];

int main()
{
    int i;
	const char acc[]="[::]";
	scanf("%s",S);
	int idx=0;
	int L,R;
	bool flag=1;
	int len=strlen(S);
	R=len-1;
//	printf(">>>%d\n",len);
	for(i=0;S[i]!='0';i++)
    {
        if(S[i]==acc[idx])
        {
            idx++;
        }
        else
        {
            len--;
        }
        if(idx==2)
        {
            L=i;
            break;
        }
    }
    if(idx!=2)
    {
        flag=0;
    }
    else
    {
        idx=3;
        for(i=R;i>L;i--)
        {
            if(S[i]==acc[idx])
            {
                idx--;
            }
            else
            {
                len--;
            }
            if(idx==1)
            {
                R=i;
                break;
            }
        }
        if(idx!=1)
        {
            flag=0;
        }
    }

    if(flag)
    {
        for(i=L+1;i<R;i++)
        {
            if(S[i]!='|')
                len--;
        }
        printf("%d\n",len);
    }
    else
    {
        printf("-1\n");
    }


	return 0;
}
