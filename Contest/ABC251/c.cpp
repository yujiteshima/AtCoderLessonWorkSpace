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

int main() {
  int n;
  cin >> n;
  vector<string> S(n);
  vector<ll> T(n);

  for (int i = 0; i < n; i++) {
    cin >> S[i] >> T[i];
  }

  map<string, ll> mp;
  ll a = -INF;
  int idx = -1;
  for (int i = 0; i < n; i++) {
    auto iter = mp.find(S[i]);
    if (iter == mp.end()) {
      mp[S[i]] = T[i];
      if (a < T[i]) {
        a = T[i];
        idx = i;
      }
    }
  }
  cout << idx + 1 << endl;
  return 0;
}