#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007;  // mod(10^9 + 7)

int main() {
  int s, t;
  cin >> s >> t;
  int ans = 0;
  for (int a = 0; a <= s; a++) {
    for (int b = 0; a + b <= s; b++) {
      for (int c = 0; a + b + c <= s; c++) {
        if (a * b * c <= t) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}