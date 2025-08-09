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

#define TASK "ATM"

const int maxn = 1e4+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n, s;
int a[maxn];
int prf[maxn];

void sub1(){

    int result = inf;
    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            int tmp = prf[j] - prf[i - 1];
            if (tmp == s) result = min(result, j - i + 1);
        }
    }

    if (result == inf) cout << 0;
    else cout << result;

}

void sub2(){

    int result = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] <= s) {
            s -= a[i];
            result++;
        }
        if (s == 0) break;
    }

    cout << result;

}

void solve(){
    
    cin >> n >> s;

    int check = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] > 0) check++;
        if (a[i] == 0) break;
    }

    if (check < n) {
        cout << -1;
        return;
    }

    sort(a + 1, a + n + 1, greater<int>());

    for (int i = 1; i <= n; ++i) prf[i] = prf[i - 1] + a[i];

    if (n <= 1000) sub1();
    else sub2();

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