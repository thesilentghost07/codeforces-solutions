#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    ll s, n;
    cin >> s >> n;
    vector<pair<ll, ll>> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].first >> d[i].second;
    }
    sort(all(d));
    for (int i = 0; i < n; i++)
    {
        if (s <= d[i].first)
        {
            cout << "NO" << endl;
            return;
        }
        s += d[i].second;
    }
    cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t = 1;
    // cin >> t;
    // while (t--) {
    solve();
    // }
    return 0;
}