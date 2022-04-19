#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    double A, B;
    cin >> A >> B;
    double ans = (A - B) / A;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}