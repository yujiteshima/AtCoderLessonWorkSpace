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
    string ans = "No";
    rep(i, 9){
        rep(j, 9){
            if((i+1) * (j+1) == n){
                ans = "Yes";
            }
        }
    }
    cout << ans << endl;
    return 0;
}