#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'
void solve()
{
    ll x, y;
    cin >> x >> y;
    ll c = lcm(x, (int)pow(10, y));
    cout << c << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}