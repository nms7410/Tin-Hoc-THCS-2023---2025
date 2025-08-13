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

#define TASK "CLASP"

const int maxn = 1e6+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n;
str s;
int prf[maxn];

void solve(){
    
    cin >> n >> s;

    for (int i = 0; i < n; ++i) {
        prf[i] = prf[i - 1];
        if (s[i] == '>') prf[i]++;
    }

    int result = 0;
    for (int i = 0; i < n; ++i) if (s[i] == '<') result += prf[i];
    
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
