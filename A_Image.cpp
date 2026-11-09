#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())
#define endl '\n'

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    set<char> st;
    for (char c : s1)
    {
        st.insert(c);
    }
    for (char c : s2)
    {
        st.insert(c);
    }
    cout << st.size() - 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}