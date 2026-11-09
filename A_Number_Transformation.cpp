#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    if (n>k){
        cout << "0 0\n";
        return;
    }
    else if (k%n==0)
        cout << "1" << " " << k/n << "\n";
    else
        cout << "0 0\n";
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