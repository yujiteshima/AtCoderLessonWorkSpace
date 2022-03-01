#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    int minCost = 0;
    sort(a.begin(), a.end());
    cout << a[1] - a[0] + a[2] - a[1] << endl;
    return 0;
}