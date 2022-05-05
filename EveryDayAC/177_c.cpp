#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N)
    {
        cin >> A[i];
    }
    ll ans = 0;
    ll x = 0;
    rep(i, N)
    {
        ans = (ans + A[i] * x)%mod;
        x = (x + A[i]) % mod;
    }
    cout << ans << endl;
    return 0;
}