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
  int n;
  cin >> n;
  if(n % 2 == 0){
    cout << 0.50000000000 << endl;
  }else{
    double ans = 1.0 * (n / 2 + 1) / n;
    cout << fixed << setprecision(15) << ans << endl;
  }
  return 0;
}