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
template <class T>
T calc_dist(T x1, T y1, T x2, T y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
// tribo(N)の答えをメモ化する配列
vector<ll> memo;

ll tribo(ll n) {
//   cout << n << endl;
  // base case
  if (n == 0) return 0;
  else if (n == 1) return 0;
  else if (n == 2) return 1;
  
  // check memo
  //cout << "memo[n]: " << memo[n] << endl;
  if (memo[n] != -1) {
    //cout << "return" << endl;
    return memo[n];
  }
  //cout << n << ":" << tribo(n - 1) + tribo(n - 2) + tribo(n - 3) << endl;
  return memo[n] = (tribo(n - 1) + tribo(n - 2) + tribo(n - 3)) % 10007;
}

int main() {
  int n;
  cin >> n;
  memo.assign(1000009, -1);

  cout << tribo(n - 1) << endl;
  //cout << memo[n - 1] << endl;
  return 0;
}