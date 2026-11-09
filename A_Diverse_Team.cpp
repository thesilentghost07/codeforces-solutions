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
    map<int, int> d;
    for (int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;
        if (d.find(a) == d.end())
        {
            d[a] = i;
        }
    }

    if (d.size() >= (k))
    {
        cout << "YES\n";
        int count = 0;
        for (const auto &x : d)
        {
            cout << x.second << (count == k - 1 ? "" : " ");
            count++;
            if (count == k)
                break;
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
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
        return 0;
    }