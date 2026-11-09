#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
            cout << "0\n";
        else if (b == 1)
            cout << "1\n";
        else
            cout << "-1\n";
    }
    else{
    if (b <= a && (a % 2 == b % 2))
    {
        cout << a << "\n";
    }
    else if (b <= a + 1 && ((a + 1) % 2 == b % 2))
    {
        cout << a + 1 << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
    return;
}
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