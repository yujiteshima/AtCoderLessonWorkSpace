#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)
using Graph = vector<vector<int>>;
template<class T> void chmin(T& a, T b) { if (a > b) a = b; }
template<class T> void chmax(T& a, T b) { if (a > b) a = b; }

int main () {
  int n, m;
  cin >> n >> m;
  vector<ll> A(n + 1, 0);
  rep(i, n) cin >> A[i];
  vector<ll> dp(n + 1, INF);
  dp[0] = 0;
  repp(i, 1, n){
      repp(j, 1, m+1){
          if(i - j >= 0){
            chmin(dp[i], dp[i - j] + j * A[i]);
          }
      }
  }
  cout << dp[n-1] << endl;
  return 0;
}