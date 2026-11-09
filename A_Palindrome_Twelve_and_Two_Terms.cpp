#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    
    int min_r = n + 1;
    int max_r = -1;
    int min_c = m+1;
    int max_c = -1;
    
    for (int i = 1; i <= n; ++i) {
        string s;
        cin >> s;
        for (int j = 1; j <= m; ++j) {
            if (s[j - 1] == '#') {
                min_r = min(min_r, i);
                max_r = max(max_r, i);
                min_c = min(min_c, j);
                max_c = max(max_c, j);
            }
        }
    }
    int h = (min_r + max_r) / 2;
    int k = (min_c + max_c) / 2;
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