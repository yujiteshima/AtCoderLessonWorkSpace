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
  int n, k;
  cin >> n >> k;
  vector<int> P(n);
  rep(i, n) cin >> P[i];
  sort(P.begin(), P.end());
  ll ans = 0;
  rep(i, k) { ans += P[i]; }
  cout << ans << endl;
  return 0;
}