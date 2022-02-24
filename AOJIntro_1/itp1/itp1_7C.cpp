#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> spd(r + 1, vector<int>(c + 1));
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            int a;
            cin >> a;
            spd[i][j] = a;
            spd[i][c] += a;
            spd[r][j] += a;
            spd[r][c] += a;
        }
    }
    for (int i = 0; i <= r; ++i)
    {
        for (int j = 0; j <= c; ++j)
        {
            cout << spd[i][j];
            if(j != c){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}