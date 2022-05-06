#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    int n;
    cin >> n;
    int pay = (n + 1000 - 1) / 1000;
    int ans = pay * 1000 - n;
    cout << ans << endl;
    return 0;
}