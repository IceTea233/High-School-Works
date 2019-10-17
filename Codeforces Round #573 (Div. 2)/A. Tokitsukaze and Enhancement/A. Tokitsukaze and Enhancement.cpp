#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int x;

    scanf("%d",&x);
    if(x%4==1)
        printf("%d %c\n",0,'A');
    else if(x%4==3)
        printf("%d %c\n",2,'A');
    else if(x%4==2)
        printf("%d %c\n",1,'B');
    else if(x%4==0)
        printf("%d %c\n",1,'A');
    

    return 0;
}
