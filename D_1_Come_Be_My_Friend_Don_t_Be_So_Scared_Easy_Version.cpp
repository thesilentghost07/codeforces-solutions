#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int k = n - 1;
    cout << k << "\n";
    // if (k == 0) return;
    for (int i = 1; i < n; i++) {
        cout << i << " " << i << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}