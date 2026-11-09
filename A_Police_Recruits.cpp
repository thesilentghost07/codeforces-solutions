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
    ll o = 0;
    ll u = 0;
    for (ll i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        if (c > 0)
            o += c;
        else
        {
            if (o > 0)
                o--;
            else
                u++;
        }
    }
    cout << u << endl;
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