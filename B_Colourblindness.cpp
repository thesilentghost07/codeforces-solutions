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
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; ++i) {
        if (s1[i] == 'G') s1[i] = 'B';
        if (s2[i] == 'G') s2[i] = 'B';
    }
    
    if (s1 == s2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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