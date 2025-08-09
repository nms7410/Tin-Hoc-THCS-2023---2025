/*
  Author: Nguyen Minh Son
          Tanh Linh High School
          A2 - K39
*/

#include <bits/stdc++.h>

#define int long long
#define ull unsigned long long
#define str string
#define ii pair<int, int>
#define fi first
#define se second
#define el '\n'

#define TASK "DAYCON"

const int maxn = 1e4+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n;
int a[maxn], compress[maxn];
int tree[maxn];

void update(int id, int l, int r, int pos, int val){

    if (pos < l || r < pos) return;

    if (l == r) {
        tree[id] = val;
        return;
    }

    int mid = (l + r) >> 1;
    update(id * 2, l, mid, pos, val);
    update(id * 2 + 1, mid + 1, r, pos, val);

    tree[id] = max(tree[id * 2], tree[id * 2 + 1]);

}

int get(int id, int l, int r, int u, int v){

    if (v < l || r < u) return 0;

    if (u <= l && r <= v) return tree[id];

    int mid = (l + r) >> 1;

    return max(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));

}

void solve(){
    
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        compress[i] = a[i];
    }

    sort(compress + 1, compress + n + 1);

    for (int i = 1; i <= n; ++i) a[i] = lower_bound(compress + 1, compress + n + 1, a[i]) - compress;

    int lis = 0;
    for (int i = 1; i <= n; ++i) {
        int g = get(1, 1, n, 1, a[i]) + 1;
        update(1, 1, n, a[i], g);
        lis = max(lis, g);
    }

    cout << lis;

}

signed main(){

    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    solve();

    return 0;
}

/*
   You wished me happiness,
   but my happiness was you.
*/