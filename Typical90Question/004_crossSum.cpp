#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int h, w;
    cin >> h >> w;
    vector<int> lineSum(h);
    vector<int> columnSum(w);
    vector<vector<int>> A(h, vector<int>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w ; j++)
        {
            cin >> A[i][j];
            lineSum[i] += A[i][j];
            columnSum[j] += A[i][j];
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << lineSum[i] + columnSum[j] - A[i][j];
            if(j != w - 1){
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}