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
  ll n, k;
  cin >> n >> k;
  rep(i, k){
      if(n % 200 == 0){
        n /= 200;
      }else{
        n = n * 1000 + 200;
      }
  }
  cout << n << endl;
  return 0;
}