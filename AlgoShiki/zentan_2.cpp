#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)
template<class T> void chmin(T& a, T b) { if (a > b) a = b; }
template<class T> void chmax(T& a, T b) { if (a > b) a = b; }
using Graph = vector<vector<int>>;

int main () {
  int n, v;
  cin >> n >> v;
  int ans = 0;
  rep(i, n) { int tmp;
    cin >> tmp;
    if(tmp == v){
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}