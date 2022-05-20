#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int main() {
  int n, m;
  cin >> n >> m;
  Graph g(n);
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
  }
  for (int i = 0; i < n; ++i) {
    sort(g[i].begin(), g[i].end());
    for (int j = 0; j < g[i].size(); j++) {
      if (j == 0) {
        cout << g[i][j];
      } else {
        cout << " " << g[i][j];
      }
    }
    cout << endl;
  }
  return 0;
}