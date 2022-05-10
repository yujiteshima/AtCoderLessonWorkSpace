#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007;  // mod(10^9 + 7)

int main() {
  string x;
  cin >> x;
  string ans = "Strong";
  if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) ans = "Weak";
  string idx = "01234567890";
  if (x[3] == idx[(x[2] - '0') + 1] && x[2] == idx[(x[1] - '0') + 1] && x[1] == idx[(x[0] - '0') + 1]) ans = "Weak";
  cout << ans << endl;
  return 0;
}