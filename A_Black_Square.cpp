#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    vector<ll> a(5);
    for (ll i = 1; i < 5; i++) {
        cin >> a[i];
    }
    string s;cin >> s;
    ll t= 0;
    for (char c : s) {
        t+= a[c-'0'];
    }
    cout << t << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t = 1;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}