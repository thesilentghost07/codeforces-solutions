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
    string s;
    cin >> s;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            ans++;
        }
    }
    bool t =
     false;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
        {
            t = true;
        }
    }
    if (t)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << ans << endl;
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