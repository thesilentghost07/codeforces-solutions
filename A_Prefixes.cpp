#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n;cin>>n;
    string s;cin>>s;
    ll a = 0;
    for (int i = 0; i < n; i += 2) {
        if (s[i] == s[i + 1]) {
            s[i] = (s[i] == 'a') ? 'b' : 'a';
            a++;
        }
    }

    cout << a << "\n" << s << "\n";
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