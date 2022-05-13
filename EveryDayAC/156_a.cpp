#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
  int n, r;
  cin >> n >> r;
  if(n >= 10){
    cout << r << endl;
  }else {
    cout << r + 100 * (10 - n) << endl;
  }
  return 0;
}