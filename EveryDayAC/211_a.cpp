#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a, b;
    cin >> a >> b;
    double ans = (a - b) / 3.0 + b;
    cout << fixed << setprecision(6) << ans << endl;
    return 0;
}