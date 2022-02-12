#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<vector<vector<vector<int>>>> x(n, vector<vector<vector<int>>>(n, vector<vector<int>>(n, vector<int>(n))));
    vector<vector<vector<int>>> x(4, vector<vector<int>>(3, vector<int>(10)));
    for (int i = 0; i < n; i++)
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        x[b - 1][f - 1][r - 1] += v;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (k == 0)
                {
                    cout << " " << x[i][j][k] << " ";
                }
                else if(k != 9) {
                    cout << x[i][j][k] << " ";
                }
                else
                {
                    cout << x[i][j][k] << endl;
                }
            }
        }
        if (i != 3)
        {
            cout << "####################" << endl;
        }
        // else{
        //     cout << endl;
        // }
    }
    return 0;
}