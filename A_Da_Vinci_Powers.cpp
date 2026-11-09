#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{

    int n;
    cin >> n;
    if (n >= 0 && n <= 13)
    {
        cout << pow(2, n) << "\n";
    }
    else
    {
        cout << pow(2, n) - (100 * (pow(2, n - 13))) << "\n";
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
    // return 0;
}