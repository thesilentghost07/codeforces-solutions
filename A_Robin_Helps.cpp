#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int g = 0;
    int x=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]>=k){
            g=g+v[i];
        }
        else if (v[i]==0 && g>0){
            g--;
            x++;
    }
}
    cout << x << "\n";
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