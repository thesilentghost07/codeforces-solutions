#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n,k;
    cin >> n >> k;

    vector<ll> a(n), b(n);
    ll x=0,y=0,z=0,v=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0) z++;
        else x++;
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] % 2 != 0) v++;
        else y++;
    }

    if (k % 2 == 0) {
        if (z >= v) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        if (x >= y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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