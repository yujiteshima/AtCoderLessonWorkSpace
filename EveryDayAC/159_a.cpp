#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

ll nCk(int n, int k) {
  ll x = 1;
  ll y = 1;
  ll z = 1;

  rep(i, n) x = (x * (n - i)) % mod;
  rep(i, n - k) y = (y * (n - k - i)) % mod;
  rep(i, k) z = (z * (k - i)) % mod;

  ll yz = (y * z) % mod;

  return (x / (yz)) % mod;
}

int main () {
  int n, m;
  cin >> n >> m;
  ll ans = nCk(n, 2) + nCk(m, 2);
  cout << ans << endl;
  return 0;
}

