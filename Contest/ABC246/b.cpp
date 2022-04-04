#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    double a, b, c;
    cin >> a >> b;
    c = sqrt(a * a + b * b);
    double x, y;
    x = a * (1 / c);
    y = b * (1 / c);
    cout << fixed << setprecision(12) << x << " " << y << endl;
    return 0;
}