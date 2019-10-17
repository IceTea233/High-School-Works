#include <cstdio>
#include <cstdlib>
#include <cstring>


int main(){
    long long int t,n,a,b,k,l_p,s_p;
    while(scanf("%I64d %I64d %I64d %I64d %I64d",&t,&n,&a,&b,&k)!=EOF){
        if(n%2)
        {
            l_p=((n-1)/2)*(a+b)+a;
        }
        else
        {
            l_p=n*(a+b);
        }
        s_p=t*k;
        if(l_p>=s_p)
            printf("%I64d\n",t);
        else if(k>n)
            printf("0\n");
        else
            printf("%I64d\n",l_p/k);
    }
    return 0;
}
