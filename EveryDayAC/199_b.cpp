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
  int n;
  cin >> n;
  vector<int> A(n), B(n);
  rep(i, n) cin >> A[i];
  rep(i, n) cin >> B[i];
  int ans = 0;
  repp(i, 1, 1001) {
    rep(j, n) {
      if (A[j] <= i && i <= B[j]) {
        ++ans;
      }
    }
  }
  cout << ans << endl;
  return 0;
}