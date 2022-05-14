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

int main() {
  int n, q;
  cin >> n >> q;
  vector<vector<ll>> A(n + 10);
  rep(i, n) {
    ll tmp;
    cin >> tmp;
    A[tmp].push_back(i+1);
  }
  rep(i, A.size()) { cout << A[1][i] << " "; }
  cout << endl;
  rep(i, q) {
    ll x, k;
    cin >> x >> k;
    if (A[x].size() <= k) {
      cout << -1 << endl;
    } else {
      cout << A[x][k] << endl;
    }
  }
  return 0;
}