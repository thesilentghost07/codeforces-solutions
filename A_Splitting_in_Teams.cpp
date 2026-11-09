#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n;cin>>n;
    int c1 = 0, c2 = 0;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x == 1) c1++;
        else if (x == 2) c2++;
    }
    
    if (c1 <= c2) {
        cout << c1 << "\n";
    } else {
        cout << c2 + (c1 - c2) / 3 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ll t = 1;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}