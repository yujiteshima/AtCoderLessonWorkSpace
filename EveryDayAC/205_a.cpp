#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int a, b;
    cin >> a >> b;
    double ans = a * b / 100.0;
    cout << fixed << setprecision(7) << ans << endl;
    return 0;
}