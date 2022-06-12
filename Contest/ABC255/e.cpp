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
  int r, c;
  cin >> r >> c;
  int a11, a12, a21, a22;
  cin >> a11 >> a12 >> a21 >> a22;
  if (r == 1 && c == 1) {
    cout << a11 << endl;
  } else if (r == 1 && c == 2) {
    cout << a12 << endl;
  } else if (r == 2 && c == 1) {
    cout << a21 << endl;
  } else if (r == 2 && c == 2) {
    cout << a22 << endl;
  }
  return 0;
}