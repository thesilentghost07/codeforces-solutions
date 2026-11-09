#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string target = "Timur";
        sort(target.begin(), target.end());

        if (n == 5)
        {
            sort(s.begin(), s.end());
            if (s == target)
            {
                cout << "YES\n";
            }
            else 
             cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}