#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'
ll f(ll x){
    x+= 1;
    while (x% 10 == 0)
    {
        x/= 10;
    }
    return x;
}
void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll>v;
    while (v.find(n) == v.end()) {
        v.insert(n);
        n = f(n);
    }
    cout << v.size() << endl;
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