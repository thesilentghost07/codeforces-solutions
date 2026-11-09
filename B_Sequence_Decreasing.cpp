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
    vector<ll> a(n);
    ll m = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m = min(m, a[i]);
    }

    if (m <= n - 1)
    {
        cout << n << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}