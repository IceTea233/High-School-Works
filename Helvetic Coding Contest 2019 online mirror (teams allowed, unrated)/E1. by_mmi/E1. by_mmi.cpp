#include<bits/stdc++.h>
#define X first
#define Y second
#define mp make_pair
#define pb push_back
#define ins insert
#define all(X) X.begin(), X.end()
#define rall(X) X.rbegin(), X.rend()
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define maxn 50007
using namespace std;
typedef long long int loli;
typedef pair<loli,loli> pll;
typedef pair<loli,pll> plll;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
struct DS {
    vector<int> p, s;
    void init(int _x) {
        p.resize(_x + 1);
        s.resize(_x + 1);
        fill(all(p), -1);
        fill(all(s),  1);
    }
    int find(int x) {
        return (p[x] == -1) ? x : (p[x] = find(p[x]));
    }
    bool join(int x, int y) {
        x = find(x);
        y = find(y);
        if(x == y) return false;
        if(s[x] < s[y])
            swap(x, y);
        s[x] += s[y];
        p[y] = x;
        return true;
    }
};
struct Edge {
    int u, v;
    loli w;
    Edge(int a, int b, loli c) :
        u(a), v(b), w(c) {}
    bool operator < (const Edge &a) const {
        return w < a.w;
    }
};

vector<Edge> edge;
loli U, V, W;
int n, m;
DS ds;


bool cal(loli x) {
    ds.init(n);
    for(int i = 0; i < edge.size(); i++) {
        if(edge[i].w < x) {
            ds.join(edge[i].u, edge[i].v);
        } else {
            return ds.join(U, V);
        }
    }
    return ds.join(U,V);
}

int bs(int l,int r)
{
    printf("%d,%d\n",l,r);
    if(l==r)
        return l;
    int m=(l+r)/2;
    if(cal(l))
        return bs(l,m);
    else
        return bs(m+1,r);
}

int main() {
    scanf("%d%d", &n, &m);
    scanf("%lld%lld%lld", &U, &V, &W);
    for(int i = 1; i < m; i++) {
        int u, v; loli w;
        scanf("%d%d%lld", &u, &v, &w);
        edge.emplace_back(u, v, w);
    }
    if(edge.empty()) {
        printf("%d\n", (int)1e9);
        return 0;
    }
    sort(all(edge));
    loli mid, l = 0, r = 1e9 + 1;

    int ans=bs(0,1e9);
    printf("%d\n", ans);
}
