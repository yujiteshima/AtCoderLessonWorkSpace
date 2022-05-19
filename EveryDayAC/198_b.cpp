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
  string n;
  cin >> n;
  int z = 0;
  for (int i = n.size() - 1; i > 0; --i) {
    if(n[i] == '0'){
      ++z;
    }else{
      break;
    }
  }
  string ss = n.substr(0, n.size() - z);
  if(ss == string(ss.rbegin(), ss.rend())){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}