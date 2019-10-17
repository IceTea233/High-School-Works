#include<cstdio>

int main()
{
    int i,j;
    int n;


    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        int count=0;
        int m;
        for(j=0;j<m;j++)
        {
            int m;
            scanf("%d",&m);
            if(m)
                count++;
        }
        if(m==0)
        {
            printf("Typically Otaku\n");
        }
        else if(m==1)
        {
            printf("Eye-opener\n");
        }
        else if(m==2)
        {
            printf("Young Traveller\n");
        }
        else if(m==3)
        {
            printf("Excellent Traveller\n");
        }
        else if(m==4)
        {
            printf("Contemporary Xu Xiake\n");
        }
    }

    return 0;
}
