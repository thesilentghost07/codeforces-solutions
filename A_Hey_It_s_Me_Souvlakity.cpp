#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 0;
    int f=0,l=0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1'){
                f=i;
                break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '1')
                l=i;
                k++;
    }
    if (k==0)
        cout << 0 << "\n";
    else
        cout << (l-f) << "\n";
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