#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 2134567890
#define de(x) if(x!=0 && MODE==x)
#define MODE 1
using namespace std;

int arr[100007]={};

int main()
{
    int i,j;
    int q;

    scanf("%d", &q);
    while(q--)
    {
        int n,r;
        scanf("%d %d", &n, &r);
        set< int, greater<int> >st;
        for( i=1; i<=n; i++)
        {
            int x;
            scanf("%d", &x);
            st.insert(x);
        }

        int move = 0;
        int cnt = 0;
        for( auto it:st)
        {
            if(it-move>0)
            {
                cnt++;
                move += r;
            }
            else
                break;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
