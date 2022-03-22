#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, a, b) for (int i = a; i < (int)b; ++i)

template<class T> void chmin(T &a, T b){
    if(a > b){
        a = b;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> h(n);
    rep(i, 0, n) cin >> h[i];
    vector<ll> dp(n, INF);
    dp[0] = 0;

    rep(i, 0, n){
        rep(j, 1, k + 1) {
            chmin(dp[i + k], dp[i] + abs(h[i] - h[i + k]));
        }
    }
    cout << dp[n] << endl;
    return 0;
}