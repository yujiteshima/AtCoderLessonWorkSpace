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
  int n;
  cin >> n;
  vector<vector<ll>> vec(n, vector<ll>(n));
  rep(i, n) cin >> vec[i][0] >> vec[i][1];
  ll min = INF;
  rep(i, n) {
    rep(j, n) {
      if (i == j) {
        chmin(min, vec[i][0] + vec[j][1]);
      } else {
        ll tmp = vec[i][0] < vec[j][1] ? vec[j][1] : vec[i][0];
        chmin(min, tmp);
      }
    //   cout << "i:" << i << " "
    //        << "j:" << j << " "
    //        << "min:" << min << endl;
    }
  }
  cout << min << endl;
  return 0;
}