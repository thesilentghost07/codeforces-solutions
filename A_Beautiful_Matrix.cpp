#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll m[5][5];
    ll r=0,c=0;
    for (ll i=0;i<5;i++){
        for (ll j=0;j<5;j++){
            cin>>m[i][j];
            if (m[i][j]==1){
                r=i;c=j;
            }
        }
    }
    cout<<abs(r-2)+abs(c-2)<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t = 1;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}