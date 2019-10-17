#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int s[200007];

int main()
{
    int i,j;
    int n,b,a;
    int full;

    scanf("%d %d %d",&n,&b,&a);
    full=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==0)
        {
            if(a>0)
                a--;
            else if(b>0)
                b--;
            else
                break;
        }
        else if(s[i]==1)
        {
            if(a==full)
            {
                a--;
            }
            else if(b>0)
            {
                b--;
                a++;
            }
            else if(a>0)
            {
                a--;
            }
            else
            {
                break;
            }
//            if(b>0)
//            {
//                b--;
//                if(a<full)
//                    a++;
//            }
//            else if(a>0)
//            {
//                a--;
//            }
//            else
//            {
//                break;
//            }
        }
    }
//    printf(">>>%d %d\n",a,b);
    printf("%d\n",i);


    return 0;
}
