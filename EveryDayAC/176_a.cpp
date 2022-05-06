#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    int n, x, t;
    cin >> n >> x >> t;
    int ans = (n + x - 1) / x * t;
    cout << ans << endl;
    return 0;
}