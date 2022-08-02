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
  int n;
  cin >> n;
  vector<vector<char>> A(n, vector<char>(n));
  rep(i, n){
    rep(j,n){
      char temp;
      cin >> temp;
      A[i][j] = temp;
    }
  }
  string ans = "correct";
  rep(i, n){
    rep(j, n){
      if(i == j){
        continue;
      }
      if(A[i][j] == 'W'){
        if(A[j][i] != 'L'){
          ans = "incorrect";
        }
      }else if(A[i][j] == 'L'){
        if (A[j][i] != 'W') {
          ans = "incorrect";
        }
      }else if(A[i][j] == 'D'){
        if (A[j][i] != 'D') {
          ans = "incorrect";
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}