#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (min(a, b) > max(c, d) || min(c, d) > max(a, b))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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