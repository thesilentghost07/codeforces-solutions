#include <iostream>
using namespace std;

void solve() {
    long long n;
    if (!(cin >> n)) return;
    long long p = 1;
    while (p * 10<= n) {
        p*=10;
    }
    long long l =(n/p+1) * p;
    cout << l-n << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}