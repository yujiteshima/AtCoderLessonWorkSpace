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
  int n, x;
  cin >> n >> x;
  vector<int> A(n);
  rep(i, n) cin >> A[i];
  int sum = 0;
  rep(i, n) {
    if (i % 2 == 0) {
      sum += A[i];
    } else {
      sum += (A[i] - 1);
    }
  }
  if (x >= sum) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}