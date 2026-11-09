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
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    ll x = 1LL << a[0];
    ll y = 1LL << a[1];
    for (int i = 2; i < n; ++i) {
        if (x <= y) {
            x += (1LL << a[i]);
        } else {
            y += (1LL << a[i]);
        }
    }
    cout << x * y << endl;
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