#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

bool solve() {
    ll a,b,c;
    cin >>a>>b>>c;
    if(a+b+c>=2)
    return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    ll c=0;
    while (t--) {
        if(solve())
        c++;
    }
    cout<<c<<endl;
    return 0;
}