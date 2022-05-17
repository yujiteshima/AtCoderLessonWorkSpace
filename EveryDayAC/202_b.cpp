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

int main () {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  rep(i, s.size()) {
    if (s[i] == '6') {
      s[i] = '9';
    } else if (s[i] == '9') {
      s[i] = '6';
    }
  }
  cout << s << endl;
  return 0;
}