#include <bits/stdc++.h>
using namespace std;

int main () {
    double r;
    cin >> r;
    double area = M_PI * r * r;
    double circum = 2.0 * M_PI * r;
    cout << fixed << setprecision(7) << area << " " << circum << endl;
    return 0;
}