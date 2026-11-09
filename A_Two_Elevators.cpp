#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = a - 1;
    ll y = abs(b - c) + (c - 1);
    if (x > y)
    {
        cout << "2" << endl;
    }
    else if (x < y)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "3" << endl;
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
