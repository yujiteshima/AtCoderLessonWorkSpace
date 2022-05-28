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

int main () {
  int n, k;
  cin >> n >> k;
  vector<int> A(n);
  vector<int> B(k);
  int max = 0;
  rep(i, n) {
    int tmp;
    cin >> tmp;
    A[i] = tmp;
    if (tmp > max) {
      max = tmp;
    }
  }
  vector<int> index;
  rep(i, n) { if (A[i] == max){
      index.push_back(i+1);
    }
  }
  rep(i, k) cin >> B[i];
  string ans = "No";
  rep(i, index.size()){
      rep(j, k){
          if(index[i] == B[j]){
            ans = "Yes";
          }
      }
  }
  cout << ans << endl;
  return 0;
}