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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int ans = 0;
  int mizuiro = a;
  int akairo = 0;
  if (b > c * d) {
    cout << -1 << endl;
  } else {
    while (true) {
      if (mizuiro <= akairo * d) {
        break;
      }
      mizuiro += b;
      akairo += c;
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}