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
  int h, w;
  cin >> h >> w;
  vector<pair<int, int>> koma;
  for (int i = 0; i < h; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < w; ++j) {
      if (s[j] == 'o') {
        koma.push_back({i, j});
      }
    }
  }
  int ans =
      abs(koma[0].first - koma[1].first) + abs(koma[0].second - koma[1].second);
  cout << ans << endl;
  return 0;
}