#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    ll x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    ll ans;
    if (x / d > k){
        ans = x - d * k;
    }else {
        ll e = x / d;
        k -= e;
        x -= e * d;
        if(k %2 == 1){
            x = abs(x - d);
        }
        ans = x;
    }
    cout << ans << endl;
    // ll X, K, D;
    // cin >> X >> K >> D;
    // X = abs(X);
    // if(X / D <= K){
    //     cout << abs(X - K * D) << endl;
    // }else{
    //     if(K % 2 == 0){
    //         cout << X
    //     }
    // }
    return 0;
}