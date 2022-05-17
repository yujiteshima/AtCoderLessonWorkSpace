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

int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  if (c * d > b) {
    bool flag = true;
    int i = 1;
    while (flag) {
      //a += b;
      if ((a + b * i)<= d * i * c) break;
      i++;
    }
    cout << i << endl;
    return 0;
  } else
    cout << -1 << endl;

  return 0;
}