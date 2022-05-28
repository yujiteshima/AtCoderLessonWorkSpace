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
  int n;
  cin >> n;
  vector<ll> A(n);
  rep(i, n) cin >> A[i];
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j){
        if(A[i] == A[j] ){
          continue;
        }
      for (int k = j + 1; k < n; ++k){
        if (A[i] != A[k] && A[j] != A[k]) {
        cout << i << j << k << endl;
          ++ans;
        }
      } }
  }
  cout << ans << endl;
  return 0;
}