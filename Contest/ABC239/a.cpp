#include <bits/stdc++.h>
using namespace std;

int main () {
    long long h;
    cin >> h;
    long double ans = sqrt(h * (12800000 + h));
    cout << setprecision(8) << ans << endl;
    return 0;
}