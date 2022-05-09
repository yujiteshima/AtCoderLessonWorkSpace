#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
  ll n;
  cin >> n;
  ll val = 1;
  for (ll i = 0; i <= 60; i++){
      if(val > n){
        cout << i - 1 << endl;
        break;
      }
      val *= 2;
  }
  return 0;
}