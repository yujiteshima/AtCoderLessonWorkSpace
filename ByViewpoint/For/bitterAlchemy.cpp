#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> m[i];
    }
    int arySum = accumulate(m.begin(), m.end(), 0);
    int remain = x - arySum;
    sort(m.begin(), m.end());
    int minM = m[0];
    int plusN = remain / minM;
    cout << n + plusN << endl;
    return 0;
}