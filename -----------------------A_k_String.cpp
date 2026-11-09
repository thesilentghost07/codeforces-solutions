#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    ll k;
    cin >> k;
    string s;
    cin >> s;
    vector<ll> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    string n = "";
    for (int i = 0; i < 26; i++) {
        if (freq[i] % k != 0) {
            cout << -1 << endl;
            return;
        }
        n += string(freq[i] / k, 'a' + i);
    }
    string ans = "";
    for (int i = 0; i < k; i++) {
        ans += n;
    }
    cout << ans << endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}