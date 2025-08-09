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
int a[maxn];

void trace(int l, int r){

    for (int i = l; i <= r; ++i) cout << a[i] << " ";
    cout << el;

}

void solve(){
    
    cin >> n >> s;

    for (int i = 1; i <= n; ++i) cin >> a[i];

    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        int sum = a[i];
        for (int j = i + 1; j <= n; ++j) {
            sum += a[j];
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