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
  string s;
  cin >> s;
  if(s.size() == 1){
    cout << s << s << s << s << s << s << endl;
  }else if(s.size() == 2){
    cout << s << s << s << endl;
  }else{
    cout << s << s << endl;
  }
  return 0;
}