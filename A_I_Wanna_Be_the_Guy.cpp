#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    unordered_set<int> a;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int l;
        cin >> l;
        a.insert(l);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l;
        cin >> l;
        a.insert(l);
    }
    if ((int)a.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
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