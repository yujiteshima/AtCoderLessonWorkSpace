#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    set<vector<int>> se;
    for (int i = 0; i < n; ++i)
    {
        int l;
        cin >> l;
        vector<int> v(l);
        for (int j = 0; j < l; ++j)
        {
            cin >> v[j];
        }
        se.insert(v);
    }
    cout << se.size() << endl;
    return 0;
}