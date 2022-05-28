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
template<class T> void chmin(T& a, T b) { if (a > b) a = b; }
template<class T> void chmax(T& a, T b) { if (a < b) a = b; }
ll gcd(ll a, ll b) {
  if (a % b == 0) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

int main () {
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = n * (1 + n) / 2;

  ll a_kousuu = n / a;
  ll a_sum = a_kousuu * (a + a_kousuu * a) / 2;

  ll b_kousuu = n / b;
  ll b_sum = b_kousuu * (b + b_kousuu * b) / 2;

  ll c = lcm(a, b);
//   cout << c << endl;
  ll c_kousuu = n / c;
  ll c_sum = c_kousuu * (c + c_kousuu * c) / 2;
//   cout << ans << " " << a_sum << " " << b_sum << " " << c_sum << endl;
  ans = ans - a_sum - b_sum + c_sum;

  cout << ans << endl;
  return 0;
}