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
    vector<ll> freq(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= n + 1)
            freq[x]++;
    }
    ll m = 0, y = 0;
    while (true)
    {
        if (freq[m] == 0)
            break;
        y += freq[m];
        if (y < k)
            break;
        y -= (k);
        m++;
    }
    cout << m << endl;
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