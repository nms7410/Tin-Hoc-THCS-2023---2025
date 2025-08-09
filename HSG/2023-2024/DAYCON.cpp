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

const int maxn = 1e2+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n, s;
int a[maxn], prf[maxn];

void trace(int l, int r){

    if (l > r) {
        cout << el;
        return;
    }

    cout << a[l] << " ";;
    trace(l + 1, r);

}

void solve(){
    
    cin >> n >> s;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        prf[i] = prf[i - 1] + a[i];
    }

    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            int sum = prf[j] - prf[i - 1];
            if (sum == s) {
                trace(i, j);
                cnt++;
            }
        }
    }

    cout << cnt;

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
