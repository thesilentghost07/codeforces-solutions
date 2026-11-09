#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n,k;
    cin>>n>>k;
    if (n==1){
        cout<<1<<endl;
        return;
    }
    else if(k==1){
        cout<<n<<endl;
        return;
    }
    else{
        cout<<(n*k)-(k-1)<<endl;
    }
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