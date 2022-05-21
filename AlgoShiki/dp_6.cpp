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
template<class T> void chmax(T& a, T b) { if (a < b) a = b; }

int main () {
  int n, m;
  cin >> n >> m;
  vector<int> D(m);
  rep(i, m) cin >> D[i];
  vector<bool> dp(n + 1, false);
  dp[0] = true;
  repp(i, 1, n+1){
      rep(j, m){
          if(i - D[j] >= 0 && dp[i - D[j]]){
            dp[i] = true;
          }
      }
  }
  cout << (dp[n] ? "Yes" : "No") << endl;

  return 0;
}