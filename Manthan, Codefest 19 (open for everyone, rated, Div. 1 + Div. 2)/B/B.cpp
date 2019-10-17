#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890

using namespace std;

int arr[2007];
unordered_map<int,int>mp;
int cnt[2007]={};
bool v[2007];
int id = 1;

int main()
{
    int i,j;
    int n;

    scanf("%d",&n);


    for( i=1; i<=n ;i++)
    {
        scanf("%d",&arr[i]);
        if(!mp[ arr[i] ])
            mp[ arr[i] ] = id++;
    }

    int mini = ULTRA;
    for( i=1; i<=n; i++)
    {
        memset(v,0,sizeof(v));

        for( j=n; j>=i; j--)
        {
            int num = arr[j];
            if(cnt[mp[num] ] || v[mp[num]])
                break;
            v[mp[num]] = 1;
        }
        // printf(">>>%d %d\n",i,j);
        mini = min(mini,j-i+1);
        cnt[ mp[arr[i]] ]++;
        if(cnt[ mp[arr[i] ] ]>=2)
            break;
    }
    printf("%d\n",mini);

    return 0;
}
