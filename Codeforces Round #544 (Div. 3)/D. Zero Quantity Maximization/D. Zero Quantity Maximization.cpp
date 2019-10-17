#include<bits/stdc++.h>
#define LLI long long int
#define tolerance 0.000000000035
using namespace std;

struct frc
{
    int up;
    int down;
};

frc basic(frc x)
{
    if(x.up==0)
        x.down=1;
    else
    {
        if(x.down<0)
        {
            x.down*=-1;
            x.up*=-1;
        }
        int gcd=__gcd(abs(x.up),abs(x.down));
        x.up/=gcd;
        x.down/=gcd;
    }
    return x;
}

bool operator<(frc a,frc b)
{
    if(a.down<b.down || a.down==b.down && a.up<b.up)
        return 1;
    else
        return 0;
}

bool eql(frc a,frc b)
{
    if(a.up==b.up && a.down==b.down)
        return 1;
    else
        return 0;
}

int a[200007];
int b[200007];

int main()
{
	int i,j;
	int n;

//	printf("%.18f\n%.18f\n",(double)1/1e9,(double)2/1e9);
	scanf("%d",&n);

	for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }

    vector<frc>keep;
    int bonus=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]!=0)
        {
            frc x={b[i],a[i]};
            keep.push_back(basic(x));
        }
        else
        {
            if(b[i]==0)
                bonus++;
        }
    }
//    printf("www>>>%d\n",bonus);

//    for(auto it:keep)
//    {
//        printf("%.9f\n",it);
//    }
    int maxi=0,c=0;
    if(!keep.empty())
    {
        sort(keep.begin(),keep.end());
        c=1;
        for(i=1;i<keep.size();i++)
        {
            if(eql(keep[i],keep[i-1]))
            {
                c++;
            }
            else
            {
                maxi=max(maxi,c);
                c=1;
            }
//            printf("max>>>%d\n",maxi);
        }
        maxi=max(maxi,c);
//        printf("max>>>%d\n",maxi);
    }

    printf("%d\n",maxi+bonus);


	return 0;
}
