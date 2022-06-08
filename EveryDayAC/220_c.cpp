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

int main () {
  ll n;
  cin >> n;
  vector<ll> A(n);
  rep(i, n) cin >> A[i];
  ll x;
  cin >> x;
  ll index = 1;
  ll cnt = 0;
  ll sum = 0;
  while (true) {
    sum += A[cnt];
    if (sum > x) break;
    ++index;
    ++cnt;
    if (cnt == n) cnt = 0;
  }
  cout << index << endl;
  return 0;
}