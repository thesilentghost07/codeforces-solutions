#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll s = a + b + c;
    ll ans = (n / s) * 3;
    ll rem = n % s;

    if (rem > 0)
    {
        rem -= a;
        ans++;
    }
    if (rem > 0)
    {
        rem -= b;
        ans++;
    }
    if (rem > 0)
    {
        rem -= c;
        ans++;
    }

    cout << ans << endl;
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