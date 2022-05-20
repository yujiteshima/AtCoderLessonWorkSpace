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
  int n, m;
  cin >> n >> m;
  Graph g(n);
  rep(i, m) { int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  int student = -1, max_num = -1;
  rep(i, n) { int num = g[i].size();
  if(max_num < num){
    max_num = num;
    student = i;
  }
  }

  sort(g[student].begin(), g[student].end());
  for(auto v: g[student]){
    cout << v << " ";
  }
  cout << endl;

  return 0;
}