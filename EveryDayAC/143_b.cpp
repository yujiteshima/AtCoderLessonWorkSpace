#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n){
        cin >> d[i];
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j){
            ans += d[i] * d[j];
        }
    }
    cout << ans << endl;
    return 0;
}