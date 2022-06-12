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

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> A(k);
  rep(i, k) cin >> A[i];
  vector<ll> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  ll res = 0;
  rep(i, n) {
    ll cres = INF;
    for (auto a : A) {
      cres = min(cres,
                 (x[i] - x[a]) * (x[i] - x[a]) + (y[i] - y[a]) * (y[i] - y[a]));
    }
    res = max(res, cres);
  }
  cout << res << endl;
  //   vector<pair<int, int>> XY;
  //   vector<pair<int, int>> XYK;
  //   rep(i, n) {
  //     bool flg = true;
  //     rep(j, k) {
  //       if (i == A[j]) {
  //         flg = false;
  //       }
  //     }
  //     int x, y;
  //     cin >> x >> y;
  //     if(flg){
  //       XY.push_back({x, y});
  //     }else{
  //       XYK.push_back({x, y});
  //     }
  //   }
  //   vector<ll> minkyori;
  //   for (auto a : XY) {
  //     ll mink = INF;
  //     for (auto b : XYK) {
  //       ll tmp = (a.first - b.first) * (a.first - b.first) +
  //                (a.second - a.second) * (a.second - a.second);
  //       if(mink > tmp){
  //         mink = tmp;
  //       }
  //     }
  //     minkyori.push_back(mink);
  //   }
  //   ll ans = 0;
  //   for (auto a : minkyori) {
  //     cout << a << endl;
  //     if(ans < a){
  //       ans = a;
  //     }
  //   }
  cout << fixed << setprecision(15) << sqrt((double)res) << endl;
  return 0;
}