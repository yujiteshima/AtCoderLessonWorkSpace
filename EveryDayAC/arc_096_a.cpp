#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007;  // mod(10^9 + 7)
template <class T>
bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
  ll A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;
  ll ans = INF;
  rep(i, 210000) {
    ll sum = C * i;
    ll x = X - i / 2;
    ll y = Y - i / 2;
    if (0 < x) sum += x * A;
    if (0 < y) sum += y * B;
    chmin(ans, sum);
  }
  cout << ans << endl;
  return 0;
}