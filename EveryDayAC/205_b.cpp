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
  int n;
  cin >> n;
  set<int> A;
  rep(i, n) {
    int tmp;
    cin >> tmp;
    A.insert(tmp);
  }
  if(A.size() == n){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}