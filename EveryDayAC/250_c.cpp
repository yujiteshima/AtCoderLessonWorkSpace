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
  int n, q;
  cin >> n >> q;
  vector<int> index(n+10);
  repp(i, 1, n+1) index[i] = i;
  rep(i, q) {
    int x;
    cin >> x;
    int tmp = index[x];
    if(tmp == n){
        int tmp2 = index[tmp -]
    }
    int tmp2 = index[tmp + 1]
  }
  return 0;
}