#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void solve()
{
    int n, k;
    if (!(cin >> n >> k))
        return;
    int a = ((k- 1) * 2) + static_cast<int>(pow(2,n-(k-1)));
    cout << a << "\n";
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