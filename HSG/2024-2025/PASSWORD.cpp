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

#define TASK "PASSWORD"

const int maxn = 1e3+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

str s;
int upper[maxn], lower[maxn], digit[maxn];

void solve(){
    
    getline(cin, s);

    if (s.size() < 6) {
        cout << 0;
        return;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) upper[i] = upper[i - 1] + 1;
        else upper[i] = upper[i - 1];

        if (islower(s[i])) lower[i] = lower[i - 1] + 1;
        else lower[i] = lower[i - 1];

        if (isdigit(s[i])) digit[i] = digit[i - 1] + 1;
        else digit[i] = digit[i - 1];
    }

    int result = 0;
    for (int i = 0; i <= s.size() - 6; ++i) {
        for (int j = i + 5; j <= s.size(); ++j) {
            bool hasupper = (upper[j] - upper[i - 1]);
            bool haslower = (lower[j] - lower[i - 1]);
            bool hasdigit = (digit[j] - digit[i - 1]);
            
            if (hasupper && haslower && hasdigit) {
                result += (int)s.size() - j;
                break;
            }
        }
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
