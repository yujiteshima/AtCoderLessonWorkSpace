#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    int n, k;
    cin >> n >> k;
    vector<double> p(n);
    vector<double> e(n + 10);
    vector<double> e_ruiseki(n + 10);
    rep(i, n)
    {
        cin >> p[i];
    }
    rep(i, n){
        e[i] = 1.0 * (1 + p[i]) / 2.0;
    }
    e_ruiseki[0] = e[0];
    for (int i = 1; i < n; i++)
    {
        e_ruiseki[i] += e_ruiseki[i - 1] + e[i];
    }
    double ans = -INF;
    // rep(i, n - k){
    //     double sum = e_ruiseki[k + i] - e_ruiseki[i];
    //     ans = max(ans, sum);
    // }
    for (int i = k - 1; i < n; i++)
    {
        double sum = e_ruiseki[i] - e_ruiseki[i - k];
        ans = max(ans, sum);
    }
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}