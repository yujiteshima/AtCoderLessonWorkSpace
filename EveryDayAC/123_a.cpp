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
  vector<ll> A(5);
  rep(i, 5) cin >> A[i];
  int k;
  cin >> k;
  string ans = "Yay!";
  rep(i, 5){
      repp(j, i+1, 5){
        //cout << "AI: " << A[i] << " AJ: " << A[j] << endl;
        if (A[j] - A[i] > k) ans = ":(";
      }
  }
  cout << ans << endl;
  return 0;
}