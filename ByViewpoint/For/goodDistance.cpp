#include <bits/stdc++.h>
using namespace std;

bool is_intenger(double x){
    return floor(x) == x;
}

int main () {
    int n, d;
    cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> x[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double dd = 0;
            for (int k = 0; k < d; ++k)
            {
                dd += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
            }
            if (is_intenger(sqrt(dd)))
            {
                ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}