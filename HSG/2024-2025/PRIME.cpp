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

#define TASK "PRIME"

const int maxn = 1e7+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int l, r;
bool prime[maxn];
int prf[maxn];

void sieve(){

    prime[0] = prime[1] = 1;

    for (int i = 2; i * i <= maxn; ++i) {
        if (!prime[i]) {
            for (int j = i * i; j <= maxn; j += i) {
                prime[j] = 1;
            }
        }
    }

}

void preprocess(){

    for (int i = 1; i <= maxn; ++i) {
        prf[i] = prf[i - 1];
        if (!prime[i]) prf[i]++;
    }

}

void solve(){

    cin >> l >> r;

    sieve();
    preprocess();

    cout << prf[r] - prf[l - 1];

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
