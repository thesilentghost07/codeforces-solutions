#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

bool solve() {
    string s;
    cin >>s;
    if (s=="X++" || s=="++X")
        return true;
    else if (s=="X--" || s=="--X")
        return false;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    ll x=0;
    while (t--) {
        if (solve())
            x++;
        else    
         x--;

    }
    cout<<x<<endl;
    return 0;
}