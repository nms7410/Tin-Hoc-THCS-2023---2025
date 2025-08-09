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

#define TASK "PAIR"

const int maxn = 3e5+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n;
int a[maxn];
map<int,int> freq;

int sum_digit(int n){

    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;

}

void solve(){
 
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] = sum_digit(a[i]);
        freq[a[i]]++;
    }

    int result = 0;
    for (ii x : freq) {
        int k = x.se;
        result += k * (k - 1) / 2;
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