#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll xk, yk, xq, yq;
    cin >> xk >> yk >> xq >> yq;
    ll xx[] = {a, -a, a, -a, b, -b, b, -b};
    ll yy[] = {b, b, -b, -b, a, a, -a, -a};
    set<pair<ll, ll>> h1;
    set<pair<ll,ll>> h2;
    for (int i = 0; i < 8; i++)
    {
        h1.insert({xx[i] + xk, yy[i] + yk});
        h2.insert({xx[i] + xq, yy[i] + yq});
    }
    int c = 0;
    for (auto &x : h1)
    {
        for (auto &y : h2)
        {
            if (x == y)
            {
                c++;
            }
        }
    }
    cout << c << endl;
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