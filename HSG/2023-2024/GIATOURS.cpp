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

#define TASK "GIATOURS"

const int maxn = 1e5+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n, m, k;

long double calc(){

    int people = n + m;
    int total_cash = (k * n) + (m * k / 2.0);
    int t = 0;

    if (people < 15) return total_cash;
    
    if (people >= 15 && people <= 25) t = (total_cash * 5) / 100;

    if (people >= 26 && people <= 35) t = (total_cash * 10) / 100;

    if (people >= 36 && people <= 45) t = (total_cash * 15) / 100;

    if (people > 45) k = (total_cash * 20) / 100;

    return total_cash - t;

}

void solve(){
    
    cin >> n >> m >> k;

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