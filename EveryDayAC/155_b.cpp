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
    string ans = "APPROVED";
    rep(i, n)
    {
        int tmp;
        cin >> tmp;
        if(tmp % 2 == 0){
            if(tmp % 3 != 0 && tmp % 5 != 0){
                ans = "DENIED";
            }
        }
    }
    cout << ans << endl;
    return 0;
}