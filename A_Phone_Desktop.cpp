#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    int x, y;
    cin >> x >> y;
    int s = 0;
    while (x > 0 || y > 0)
    {
        s++;
        int a = 15;
        int yremove = min(y, 2);
        y -= yremove;
        a -= yremove * 4;
        int xremove = min(x, a);
        x -= xremove;
    }
    cout << s << endl;
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