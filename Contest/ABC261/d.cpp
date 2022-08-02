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
template<class T> T calc_dist(T x1, T y1, T x2, T y2){ return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2); }

int main () {
  ll n, m;
  cin >> n >> m;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];
  vector<ll> c(n);
  rep(i,m) {
    ll a, b;
    cin >> a >> b;
    c[a] = b;
  }
  ll DP[n + 10][n + 10][n + 10];
  DP[0]

      return 0;
}