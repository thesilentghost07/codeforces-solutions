#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;

void solve()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    long long a = l1;
    long long b = (l2 != a) ? l2 : r2;
    cout << a << " " << b << "\n";
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