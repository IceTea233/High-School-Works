#include<bits/stdc++.h>
#define LLI long long int
#define ULTRA 213456789012345678

using namespace std;

struct SGT
{
    LLI tree[800007];//min
    LLI  tag[800007];//modify

    SGT()
    {
        memset(tree,0,sizeof(tree));
        memset(tag,0,sizeof(tag));
    }

    int LC(int i){return i*2;}
    int RC(int i){return i*2+1;}

    void pull(int L, int R, int i)
    {
        tree[i] = min(tree[LC(i)],tree[RC(i)]);
    }

    void drop(int L, int R, int i)
    {
        if(L<R)
        {
            tag[LC(i)] += tag[i];
            tag[RC(i)] += tag[i];
            int M = (L+R)/2;
            tree[LC(i)] += tag[i];
            tree[RC(i)] += tag[i];
        }
        tag[i] = 0;
    }

    void build(LLI arr[], int L, int R, int i=1)
    {
        if(L==R)
        {
            tree[i] = arr[L];
            // printf("(%d,%d) = %d\n",L,R,tree[i]);
            return;
        }
        int M = (L+R)/2;
        build( arr,   L, M, LC(i));
        build( arr, M+1, R, RC(i));
        pull(L,R,i);

        // printf("(%d,%d) = %d\n",L,R,tree[i]);
    }

    void update(int x1, int x2, LLI d, int L, int R, int i=1)
    {
        if(x1<=L && R<=x2)
        {
            tree[i] += d;
            tag[i] += d;
            // printf("(%d,%d) = %d\n",L,R,tree[i]);
            return;
        }
        drop(L,R,i);

        int M = (L+R)/2;

        if( x1 <= M)
            update( x1, x2, d,   L, M, LC(i));
        if( M+1 <= x2)
            update( x1, x2, d, M+1, R, RC(i));
        pull(L,R,i);

        // printf("(%d,%d) = %d\n",L,R,tree[i]);
    }

    int query(int L, int R, int i=1)
    {
        // printf("query(%d,%d)\n",L,R);
        if(L==R)
        {
            return L;
        }
        drop(L,R,i);

        int M = (L+R)/2;
        if( tree[RC(i)]==0 )
            return query( M+1, R, RC(i));
        else
            return query(   L, M, LC(i));
        pull(L,R,i);
    }
};

LLI s[200007];
int ans[200007];

SGT sgt;

int main()
{
    int i,j;
    int N;

    scanf("%d",&N);
    for( i=1; i<=N; i++)
    {
        scanf("%I64d",&s[i]);
    }

    sgt.build(s,1,N);

    for( i=1; i<=N; i++)
    {
        int x = sgt.query(1,N);
        // printf(">>>%d\n",x);
        ans[x] = i;
        sgt.update( x, x, ULTRA, 1, N);
        // printf("\n");
        if( x+1 <= N)
            sgt.update( x+1, N, -i, 1, N);
    }

    for( i=1; i<=N; i++)
    {
        printf("%d ",ans[i]);
    }
    printf("\n");



    return 0;
}
