#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>

using namespace std;

void solve()
{
    int x;
    cin>>x;
    vector<vector<int>> arr(x, vector<int>(x));
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin>>arr[i][j];
        }
    }
        
    }
  
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