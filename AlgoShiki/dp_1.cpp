#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)
using Graph = vector<vector<int>>;
template<class T> void chmin(T& a, T b) { if (a > b) a = b; }
template<class T> void chmax(T& a, T b) { if (a > b) a = b; }

int main () {
  int n, x, y;
  cin >> n >> x >> y;
  vector<ll> dp(n, -INF);
  dp[0] = x;
  dp[1] = y;
  repp(i, 2, n) { dp[i] = (dp[i - 1] + dp[i - 2]) % 100; }
  cout << dp[n - 1] << endl;
  return 0;
}