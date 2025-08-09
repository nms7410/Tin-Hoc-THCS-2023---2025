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

#define TASK "FIBO"

const int maxn = 2e4+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n;
int dp[maxn];

bool check(int n){

    if (n <= 1) return 0;

    if (n < 4) return 1;

    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 1;
    }

    return 0;

}

void solve(){
    
    cin >> n;

    dp[1] = dp[2] = 1;

    int cnt = 0;
    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
        if (check(dp[i])) cnt++;
    }

    cout << dp[n] << el << cnt;

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