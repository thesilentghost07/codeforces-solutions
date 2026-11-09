#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }
    if (a == 0 && b == 0 && c == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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