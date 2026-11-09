#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n; 
    cin>>n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll c=0;
    for(ll i=1; i<n-1; i++){
        if(a[i-1]==1 && a[i]==0 && a[i+1]==1){
            c++;a[i+1]=0;
        }
    }
    cout<<c<<endl;
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