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
template<class T> void chmax(T& a, T b) { if (a < b) a = b; }

int main () {
  int a1, a2, a3, a4;
  vector<vector<int>> dp(4, vector<int>(4, 0));
  cin >> dp[0][0] >> dp[0][1] >> dp[0][2] >> dp[0][3];
  repp(i, 1, 4){
      rep(j, 4){
        if (i - 1 >= 0 && j - 1 >= 0) chmax(dp[i][j], dp[i][j] + dp[i - 1][j - 1]);
        if (i - 1 >= 0) chmax(dp[i][j], dp[i][j] + dp[i - 1][j]);
        if (i - 1 >= 0 && j + 1 < 4) chmax(dp[i][j], dp[i][j] + dp[i - 1][j + 1]);
      }
  }
  cout << dp[3][3] << endl;
  return 0;
}