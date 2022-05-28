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

int main() {
  int n, w;
  cin >> n >> w;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  set<int> a;

  for (int i = 0; i < n; i++) {
    if (A[i] <= w) {
      a.insert(A[i]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (A[i] + A[j] <= w) {
        a.insert(A[i] + A[j]);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (A[i] + A[j] + A[k] <= w) {
          a.insert(A[i] + A[j] + A[k]);
        }
      }
    }
  }

  cout << a.size() << endl;
  return 0;
}