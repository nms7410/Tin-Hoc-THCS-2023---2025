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

#define TASK "SUM_MAX"

const int maxn = 1e3+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n;
int a[maxn];

void solve(){
    
    cin >> n;

    for (int i = 1; i <= n; ++i) cin >> a[i];

    int sum_cur = a[1] + a[2];
    int result = sum_cur;

    for (int i = 3; i <= n; ++i) {
        sum_cur = max(a[i - 1] + a[i], sum_cur + a[i]);
        result = max(result, sum_cur);
    }

    cout << result;

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