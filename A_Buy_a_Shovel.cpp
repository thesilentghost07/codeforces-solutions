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
    for (ll x = 1; x <= 10; ++x) {
        ll t = n * x;
        if (t % 10 == 0 || t% 10 == k) {
            cout << x << endl;
            return;
        }
}
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t = 1;
    // cin >> t;
    // while (t--) {
    solve();
    // }
    return 0;
}