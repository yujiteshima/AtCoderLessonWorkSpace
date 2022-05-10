#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
  int k, a, b;
  cin >> k >> a >> b;
  string ans = "NG";
  for (int i = a; i <= b; ++i) {
    if (i % k == 0) ans = "OK";
  }
  cout << ans << endl;
  return 0;
}