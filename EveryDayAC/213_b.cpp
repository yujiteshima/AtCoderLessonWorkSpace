#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
  int n;
  cin >> n;
  vector<pair<int, int>> score_num(n);
  rep(i, n) { pair<int, int> a;
    cin >> a.first;
    a.second = (i + 1);
    score_num[i] = a;
  }
  sort(score_num.begin(), score_num.end());
  cout << score_num[n - 2].second << endl;
  return 0;
}