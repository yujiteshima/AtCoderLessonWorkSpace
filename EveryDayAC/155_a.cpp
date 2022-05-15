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
  int a, b, c;
  cin >> a >> b >> c;
  set<int> s;
  s.insert(a);
  s.insert(b);
  s.insert(c);
  if(s.size() == 2){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}