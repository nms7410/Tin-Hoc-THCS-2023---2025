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

#define TASK "XauDoiXung"

const int maxn = 1e5+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

str s;

bool palind(str s){

    str t = s;
    
    reverse(t.begin(), t.end());

    return t == s;

}

void solve(){
    
    getline(cin, s);

    if (s.size() < 3 || s.size() > 100) {
        cout << "DK";
        return;
    }

    if (palind(s)) cout << "YES";
    else cout << "NO";

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