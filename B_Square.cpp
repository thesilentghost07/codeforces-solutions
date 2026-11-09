#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n,k;cin>>n>>k;
    ll x,y;cin>>x>>y;
    if (max(n,k)==max(x,y) && min(n,k)+min(x,y)==max(n,k))
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}