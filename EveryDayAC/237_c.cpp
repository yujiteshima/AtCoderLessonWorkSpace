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
  string s;
  cin >> s;
  ll countA = 0;
  for (int i = s.size(); i > 0; --i) {
    if (s[i - 1] != 'a') {
      break;
    }
    ++countA;
  }
  string a = s.substr(0, s.size() - countA);
  ll Acount = 0;
  for (int i = 0; i < a.size(); ++i) {
    if (a[i] != 'a') {
      break;
    }
    ++Acount;
  }
  string b = a.substr(Acount, a.size());
    // cout << a << endl;
    // cout << b << endl;
  string ans = "No";
  if (countA == Acount) {
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    if (s == tmp) {
      ans = "Yes";
    }
  }else if(countA > Acount){
    string tmp = b;
    reverse(tmp.begin(), tmp.end());
    if (b == tmp) {
      ans = "Yes";
    }
  }
  cout << ans << endl;
  return 0;
}