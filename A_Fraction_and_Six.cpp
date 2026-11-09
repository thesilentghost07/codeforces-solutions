#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n,k; cin>>n>>k;
    string s1,s2; cin>>s1>>s2;
    s2="six"+s2;
    sort(all(s1));
    sort(all(s2));
    if (s1==s2)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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