#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 0)
    {
        if (k == 0)
            cout << "0 0\n";
        else
            cout << "Impossible\n";
    }
    else
    {
        cout << n + max(0, k - n) << " " << ((k == 0) ? n : n + k - 1) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}