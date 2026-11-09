#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    string s;
    cin >>s;
        bool is_first = true;
    for (int i = 0; i < (int)s.size(); ) {
        if (i + 2 < (int)s.size() && s.substr(i, 3) == "WUB") {
            i += 3;
        } else {
            if (!is_first) {
                cout << ' ';
            }
            while (i < sz(s) && !(i + 2 < sz(s) && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')) {
                cout << s[i];
                i++;
            }
            is_first = false;
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t = 1;
    // cin >> t;
    // while (t--) {
     solve();
    // }
    return 0;
}