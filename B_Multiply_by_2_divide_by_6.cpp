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
    ll c=0;
    while (n > 1) {
        if (n % 6 == 0) {
            n /= 6;
            c++;
        } else if (n % 3 == 0) {
            n *= 2;
            c++;
        } else {
            cout << -1 << "\n";
            return;
        }
    }

    cout << c << "\n";
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