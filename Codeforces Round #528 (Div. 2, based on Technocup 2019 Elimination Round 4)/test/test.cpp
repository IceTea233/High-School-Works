#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main()
{
    ll n,k;
    ll num,mod;
    cin>>n>>k;

    for(ll i=(k-1);i>=0;i--)
    {
        if(n%i==0)
        {
            mod=i;
            num=n/i;
            break;
        }
    }

    cout<<num*k+mod<<endl;

    return 0;
}
