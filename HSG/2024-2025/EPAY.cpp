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

#define TASK "filename"

const int maxn = 1e5+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int x, y, z, t, n;

long double calc(){

    int t1 = min(50ll, n) * x;
    n -= min(50ll, n);
    
    int t2 = min(50ll, n) * y;
    n -= min(50ll, n);

    int t3 = min(100ll, n) * z;
    n -= min(100ll, n);

    int t4 = n * t;

    int sum = t1 + t2 + t3 + t4;

    return sum + (sum * 8 / 100);

}

void solve(){
    
    cin >> x >> y >> z >> t >> n;

    cout << fixed << setprecision(2) << calc();

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