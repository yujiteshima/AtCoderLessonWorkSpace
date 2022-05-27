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

bool isKatamuki1tom1(int x1, int y1, int x2, int y2){
  double katamuki = 1.00 * (y2 - y1) / (x2 - x1);
  //cout << katamuki << endl;
  if (abs(katamuki) <= 1) {
    return true;
  }
  return false;
}

int main () {
  int n;
  cin >> n;
  vector<pair<int, int>> tenn(n);
  rep(i, n) { int x, y;
    cin >> x >> y;
    tenn[i].first = x;
    tenn[i].second = y;
  }
  int ans = 0;
  rep(i, n){
    repp(j, i+1, n){
      if (isKatamuki1tom1(tenn[i].first, tenn[i].second, tenn[j].first,
                          tenn[j].second)) {
        ++ans;
      }
    }
  }
  cout << ans << endl;
  return 0;
}