#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
const int mod = 1'000'000'007;  // mod(10^9 + 7)
using Graph = vector<vector<int>>;

int main() {
  set<string> s;
  rep(i, 4) {
    string tmp;
    cin >> tmp;
    s.insert(tmp);
  }
  if(s.size() == 4){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}