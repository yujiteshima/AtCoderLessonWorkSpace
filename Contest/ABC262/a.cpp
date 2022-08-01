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
template<class T> void chmin(T& a, T b) { if (a > b) a = b; }
template<class T> void chmax(T& a, T b) { if (a < b) a = b; }
template<class T> T calc_dist(T x1, T y1, T x2, T y2){ return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2); }

int main () {
  int y;
  cin >> y;
  int amari = y % 4;
  if(amari == 0){
    cout << y + 2 << endl;
  }else if(amari == 1){
    cout << y + 1 << endl;
  }else if(amari == 2){
    cout << y << endl;
  }else if(amari == 3){
    cout << y + 3 << endl;
  }
    return 0;
}