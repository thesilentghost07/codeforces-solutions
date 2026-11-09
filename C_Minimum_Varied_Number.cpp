#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string ans = "";
    for (int d = 9; d >= 1; --d) {
        if (n >= d) {
            ans += to_string(d);
            n -= d;
        }
    }
    
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}