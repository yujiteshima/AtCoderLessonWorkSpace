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

string toBinary(ll n) {
  string r;
  while (n != 0) {
    r += (n % 2 == 0 ? "0" : "1");
    n /= 2;
  }
  reverse(r.begin(), r.end());
  return r;
}

int main() {
  ll k;
  cin >> k;
  string binary = toBinary(k);
//   cout << binary << endl;
  string ans = "";
  rep(i, binary.size()) {
    if (binary[i] == '1') {
      ans.push_back('2');
    } else {
      ans.push_back('0');
    }
  }
  cout << ans << endl;
  return 0;
}