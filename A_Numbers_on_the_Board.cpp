#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n,k;
    cin >>n>>k;
    ll t = k - n + 1;
    ll m = 1; 
    for (ll x = n; x <= k; x++) {
        ll sum = 0;
        for (ll y = x ;y <= k; y++) {
            sum += y;
            if (sum >= x && sum <= y) {
                m = max(m, y-x + 1);
            }
        }
    }
    cout << t - m << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}