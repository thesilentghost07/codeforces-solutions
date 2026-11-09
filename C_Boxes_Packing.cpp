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
    map<ll, int> s;
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s[x]++;
        freq = max(freq, s[x]);
    }
    cout << freq << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //     int t = 1;
    //     cin >> t;
    //     while (t--) {
    solve();
    //     }
    //     return 0;
}