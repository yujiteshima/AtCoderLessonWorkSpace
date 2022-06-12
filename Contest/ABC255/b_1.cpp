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
template <class T>
T calc_dist(T x1, T y1, T x2, T y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> A(k);
  rep(i, k) cin >> A[i];
  vector<ll> X(n), Y(n);
  rep(i, n) { cin >> X[i] >> Y[i]; }
  ll res = 0;
  rep(i, n) {
    ll cres = INF;
    for (auto a : A) {
      //if (i == a) cout << "same point: " << i << endl;
      cres = min(cres, calc_dist(X[i], Y[i], X[a - 1], Y[a - 1]));
    }
    res = max(res, cres);
  }
  cout << fixed << setprecision(15) << sqrt((double)res) << endl;
  return 0;
}