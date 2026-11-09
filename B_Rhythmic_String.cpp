#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n;cin>>n;
    vector<ll>a(n);
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll m=0;
     for (ll i = 0; i < n; i++) {
        ll k = 0;
        for (ll j = 0; j < n; j++) {
            if (a[j] % a[i] == 0) 
                k++;
        }
        m = max(m, k);
    }

    cout << n - m << endl;
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