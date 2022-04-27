#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi = ((x / (a + c)) * a * b) + (min(a, x % (a + c)) * b);
    int aoki = ((x / (d + f)) * d * e) + (min(d, x % (d + f)) * e);
    if (takahashi > aoki)
    {
        cout << "Takahashi" << endl;
    }
    else if (takahashi < aoki)
    {
        cout << "Aoki" << endl;
    }
    else if (takahashi == aoki)
    {
        cout << "Draw" << endl;
    }
    return 0;
}