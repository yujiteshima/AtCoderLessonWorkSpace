#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    double A, B;
    cin >> A >> B;
    double ans = 100.0 * (A - B) / A ;
    cout << fixed << setprecision(25) << ans << endl;
    return 0;
}