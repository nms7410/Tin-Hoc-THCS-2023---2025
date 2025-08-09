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

#define TASK "TIMTRAU"

const int maxn = 1e5+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int m, n;

void solve(){

    cin >> m >> n;

    int tmp = 0;
    for(int i = 1; i <= n; i++){
        int y = (n - i - (5 * m) + (15 * i)) / -2;
        int x = m - (i * 3) - y;

        if(x + y + (i * 3) == m && (5 * x) + (3 * y) + i == n && x > 0 && y > 0){
            tmp++;
            cout << x << " " << y << " " << i * 3 << el;
        }
        
    }

    if(tmp == 0) cout << -1;
}

signed main(){

    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    if(fopen(TASK ".inp", "r")){
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