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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b = a;
    sort(all(b));
    if (a != b)
    {
        cout << "0" << endl;
        return;
    }
    ll ans = LLONG_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        ans = min(ans, a[i + 1] - a[i]);
    }
    ll ans2 = (ans / 2) + 1;
    cout << ans2 << endl;
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