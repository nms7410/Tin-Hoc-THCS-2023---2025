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

#define TASK "ThuaSNT"

const int maxn = 1e5+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n;
vector<int> v;

void solve(){
    
    cin >> n;

    if (n < 3 || n > 1000) {
        cout << "No";
        return;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                v.push_back(i);
                n /= i;
            }
        }
    }

    if (n > 1) v.push_back(n);

    for (int i = 0; i < v.size(); ++i) {
        if (i < v.size() - 1) cout << v[i] << ".";
        else cout << v[i];
    } 

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