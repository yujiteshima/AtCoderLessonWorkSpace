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
  int a, b;
  cin >> a >> b;
  vector<int> vec(3);
  vec[0] = a + b;
  vec[1] = a - b;
  vec[2] = a * b;
  sort(vec.begin(), vec.end());
  cout << vec[2] << endl;
  return 0;
}