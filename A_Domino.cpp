#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    ll t;
    cin >> t;
    ll st=0,sl=0;
    bool yes=false;
    for (ll i = 0; i < t; i++)
    {
        ll n, k;
        cin >> n >> k;
        st+=n;
        sl+=k;
        if (n%2!=k%2)
        yes=true;
    }
        if (sl% 2 == 0 && st%2==0)
    {
        cout << 0 << endl;
    }
    else if (sl% 2 != 0 && st%2!=0 && yes)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    
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