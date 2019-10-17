#include<bits/stdc++.h>

using namespace std;

int a[100007];
int avb[100007]={0};
bool take[100007]={0};

int main()
{
	int i,j;
	int n,m;

	scanf("%d %d",&n,&m);
	for(i=1;i<=m;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(i=1;i<=m;i++)
    {
//        printf(">>>%d\n",c);
        if(take[a[i]]==0)
        {
            take[a[i]]=1;
            c++;
        }
        else
        {
            avb[a[i]]++;
        }

        if(c==n)
        {
            printf("1");
            for(j=1;j<=n;j++)
            {
                if(avb[j]==0)
                {
//                    printf("\nout of %d\n",j);
                    take[j]=0;
                    c--;
                }
                else
                {
                    avb[j]--;
                }
            }
        }
        else
        {
            printf("0");
        }
    }


	return 0;
}
