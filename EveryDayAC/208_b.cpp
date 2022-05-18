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
  vector<ll> m = {0, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
  int p;
  cin >> p;
  int ans = 0;
  int i = 10;
  while (p != 0) {
      if(p >= m[i]){
        p -= m[i];
        ans++;
      }else{
        --i;
      }
  }
  cout << ans << endl;
  return 0;
}