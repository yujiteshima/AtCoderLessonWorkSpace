#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
  string s, t;
  cin >> s >> t;
  if(s == t.erase(s.size())){
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }
  return 0;
}