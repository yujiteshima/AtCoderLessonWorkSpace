#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
const int mod = 1'000'000'007;  // mod(10^9 + 7)
using Graph = vector<vector<int>>;
template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}
template <class T>
void chmax(T& a, T b) {
  if (a < b) a = b;
}
void add(ll &a, ll b) {
  a += b;
  a %= 100;
}
int main() {
  int n;
  cin >> n;
  vector<vector<ll>> dp(n, vector<ll>(n, 0));
  rep(i, n) cin >> dp[0][i];
  repp(i, 1, n) {
    rep(j, n) {
      // ue
      if (i - 1 >= 0) add(dp[i][j], dp[i - 1][j]);
      // hidari
      if (i - 1 >= 0 && j - 1 >= 0) add(dp[i][j],dp[i - 1][j - 1]);
      // migi
      if (i - 1 >= 0 && j + 1 < n) add(dp[i][j], dp[i - 1][j + 1]);
    }
  }
  cout << dp[n - 1][n - 1] << endl;
  return 0;
}