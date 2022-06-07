#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define ALL(a) (a).begin(), (a).end()
const int mod = 1'000'000'007; // mod(10^9 + 7)
using Graph = vector<vector<int>>;
template<class T> void chmin(T& a, T b) { if (a > b) a = b; }
template<class T> void chmax(T& a, T b) { if (a < b) a = b; }

int main () {
  int n, q;
  cin >> n >> q;
  vector<int> A(n);
  rep(i, n) cin >> A[i];
  sort(A.begin(), A.end());
  rep(i, q) { 
    int x;
    cin >> x;
    //auto itr = lower_bound(ALL(A), x);
    cout << A.end() - lower_bound(ALL(A), x) << endl;
  }
  return 0;
}