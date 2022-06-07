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
  int n, w;
  cin >> n >> w;
  vector<pair<int, int>> A(n);
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    A[i].first = a;
    A[i].second = b;
  }
  sort(A.rbegin(), A.rend());
  ll ans = 0;
  rep(i, n) {
    rep(j, A[i].second) {
        ans += A[i].first;
        //cout << "ans: " << ans << endl;
        --w;
        if(w <= 0){
          break;
        }
    }
    if (w <= 0) {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}