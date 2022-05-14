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
  string s;
  cin >> s;
  int idx = 0;
  repp(i, 1, n+1) {
    if (s[i-1] == '1') {
      idx = i;
      break;
    }
  }
  if(idx % 2 == 0){
    cout << "Aoki" << endl;
  }else{
    cout << "Takahashi" << endl;
  }
  return 0;
}