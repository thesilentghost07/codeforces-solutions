#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > a[f])
        {
            f = i;
        }
    }
    if (f == n - 1)
    {
        cout << -1 << endl;
        return;
    }
    int s = -1;
    for (int i = 0; i < n; i++)
    {
        if (i == f)
            continue;
        if (s == -1 || a[i] > a[s])
        {
            s = i;
        }
    }
    cout << f << " " << s << endl;
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