#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    string s;
    cin >> s;
    string ans = "";
    // for (ll i = 0; i < s.size(); i++)
    // {
    //     ll ch = s[i] - '0';
    //     ll in = 9 - ch;
    //     ans += (min(in, ch) + '0');
    // }
    // ll i = 0;
    // while (i < ans.size())
    // {
    //     if (ans[i] != '0')
    //         break;
    //     i++;
    // }
    // if (i == s.size())
    //     cout << "0" << endl;
    // else
    //     cout << ans.substr(i) << endl;
    for (int i = 0; i < s.size(); i++)
    {
        int d = s[i] - '0';
        int in = 9 - d;
        if (i == 0 && d == 9)
        {
            continue;
        }
        s[i] = min(in,d) + '0';
    }

    cout << s << endl;
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