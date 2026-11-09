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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    bool f = true;
    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(v[i] - v[i + 1]);
        if (diff == 5 || diff == 7)
        {
            continue;
        }
        else
        {
            f = false;
            break;
        }
    }
    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
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