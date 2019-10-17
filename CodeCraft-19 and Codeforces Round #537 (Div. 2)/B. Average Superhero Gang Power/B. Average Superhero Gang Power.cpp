#include<bits/stdc++.h>
using namespace std;

int tmp[100007];
int main()
{
    int i,j;
    int n,k,m;

    scanf("%d %d %d",&n,&k,&m);
    deque<int>arr;
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&tmp[i]);
    }
    sort(tmp,tmp+n);
    for(i=0;i<n;i++)
    {
        arr.push_back(tmp[i]);
    }
    vector<int>keep;
    int used=0;
    for(i=0;i<m;i++)
    {
//        printf("check:%d\n",arr.back());
        if(arr.size()>=2)
        {
            if(arr.front()!=arr.back())
                arr.pop_front();
            else
            {
                arr.back()++;
                used++;
                if(used>=k)
                {
                    keep.push_back(arr.back());
                    arr.pop_back();
                    used=0;
                }
            }
        }
        else
        {
            if(used<k)
            {
                arr.back()++;
                used++;
            }
        }
    }
    double avg=0;
    int divi=arr.size()+keep.size();
    for(auto it:arr)
    {
        avg+=it;
    }
    for(auto it:keep)
    {
        avg+=it;
    }
    avg/=divi;
    printf("%.9f\n",avg);

    return 0;
}
