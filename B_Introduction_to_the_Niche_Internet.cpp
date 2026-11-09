#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define endl '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));
    if (a.front() == a.back())
    {
        if (k == n)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << (i == n - 1 ? "" : " ");
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return;
    }
    reverse(a.begin(), a.begin() + (n - k + 1));
    
    cout << "YES"<<endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}