#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007;  // mod(10^9 + 7)

int main() {
  int n;
  cin >> n;
  set<string> full_name;
  rep(i, n) {
    string s, t;
    cin >> s >> t;
    full_name.insert(s + '_' + t);
  }
  //   cout << "n: " << n << endl;
  //   cout << "full_name: " << full_name.size() << endl;
  if (n != full_name.size()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}