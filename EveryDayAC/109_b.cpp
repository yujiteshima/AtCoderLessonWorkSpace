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
template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}
template <class T>
void chmax(T& a, T b) {
  if (a < b) a = b;
}

int main() {
  int n;
  cin >> n;
  string ans = "Yes";
  set<string> se;
  char ex_char;
  rep(i, n) {
    string tmp;
    cin >> tmp;
    if (i != 0) {
     // cout << ex_char << ":" << tmp[0] << endl;
      if (ex_char != tmp[0]) {
        ans = "No";
      }
    }
    //cout << i << ":" << se.size() << endl;
    if (se.size() != i) {
      ans = "No";
    }
    se.insert(tmp);
    //cout << i << ":" << tmp.back() << endl;
    ex_char = tmp[tmp.size()-1];
  }
  cout << ans << endl;
  return 0;
}