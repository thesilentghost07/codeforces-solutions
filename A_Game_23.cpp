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
    ll x = k / n;
    ll c = 0;
    if (k % n != 0)
    {
        cout << -1 << endl;
        return;
    }
    while (x % 2 == 0)
    {
        x /= 2;
        c++;
    }
    while (x % 3 == 0)
    {
        x /= 3;
        c++;
    }
    if (x == 1)
    {
        cout << c << endl;
        return;
    }
    else
    {
        cout << -1 << endl;
        return;
    }
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
    // return 0;
}