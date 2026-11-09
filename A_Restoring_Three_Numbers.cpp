#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    vector<int> x(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int a = x[3] - x[0];
    int b = x[3] - x[1];
    int c = x[3] - x[2];
    cout << a << " " << b << " " << c << "\n";
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