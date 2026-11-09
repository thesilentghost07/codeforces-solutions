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
    string a, b;
    cin >> a >> b;
    if (n == 1)
    {
        cout << (a[0] == b[0] ? 0 : 1) << endl;
        return;
    }
    int c0 = 0, c1 = 0, both = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'f' && b[i] == 'f')
            both++;
        if (a[i] == 'f')
            c0++;
        if (b[i] == 'f')
            c1++;
    }
    if (abs(c0 - c1) - both == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
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