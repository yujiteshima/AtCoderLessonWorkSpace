#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    double a, b, c, x;
    double r = 1.00000000000;
    cin >> a >> b >> c >> x;
    if (x <= a)
    {
        cout << fixed << setprecision(10) << r << endl;
    }
    else if (x <= b)
    {
        double ans = c / (b - a);
        cout << fixed << setprecision(10) << ans << endl;
    }
    else
    {
        cout << fixed << setprecision(10) << 0.00000000 << endl;
    }
    return 0;
}