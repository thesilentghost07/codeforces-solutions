#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll t;cin>>t;
    while (t--) {
        ll n;
        cin >> n;
        cout << "? 1 " << n << endl;
        ll x;
        cin >> x;
        if (x == 0 || x == n) {
            cout << "! NO" << endl;
            return;
        }
        cout << "? 1 " << x << endl;
        ll y;
        cin >> y;
        if (y == x) {
            cout << "! NO" << endl;
        } else {
            cout << "! YES" << endl;
        }
    }
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