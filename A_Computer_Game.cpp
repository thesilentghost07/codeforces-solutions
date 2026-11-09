#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    bool f = true;
    for (int i = 0; i < n; ++i) {
        if (s1[i] == '1' && s2[i] == '1') {
            f = false;
            break;
        }
    }

    if (f) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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