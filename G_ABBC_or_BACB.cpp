#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    string s;
    cin >> s;
    ll ca = 0;
    ll t=0;
    ll ma=LLONG_MAX;
    for (char c:s){
        if (c=='A'){
            ca++;
            t++;
        }
        else{
            ma=min(ma,ca);
            ca=0;
        }
    }
    cout << t-min(ma,ca) << endl;
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