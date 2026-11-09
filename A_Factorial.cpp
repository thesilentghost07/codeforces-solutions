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
    ll s = 1;
    if (n <= 10)
    {
        for (int i = 1; i <= n; i++)
        {
            s *= i;
        }
        cout << s << endl;
    }
    else
        cout << -1 << endl;
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