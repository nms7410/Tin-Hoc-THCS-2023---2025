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

#define TASK "TICH_MAX"

const int maxn = 1e3+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n, k;
int a[maxn];

void solve(){
    
    cin >> n >> k;

    if (n < 3 || n > 1000 || k < 2 || k >= n) {
        cout << "Sai dieu kien";
        return;
    }

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (abs(a[i]) > 1000000) {
            cout << "Sai dieu kien";
            return;
        }
    }

    sort(a + 1, a + n + 1, greater<int>());

    int result = 1;
    for (int i = 1; i <= k; ++i) result *= a[i];

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