#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }
    vector<int> b(m);
    for (int k = 0; k < m; ++k)
    {
        cin >> b[k];
    }
    vector<int> c(n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            c[i] += a[i][j] * b[j];
        }
    }
    for(int i = 0; i < n; ++i){
        cout << c[i] << endl;
    }
    return 0;
}