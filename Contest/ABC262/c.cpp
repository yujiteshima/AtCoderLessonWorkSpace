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
template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}
template <class T>
void chmax(T& a, T b) {
  if (a < b) a = b;
}
template <class T>
T calc_dist(T x1, T y1, T x2, T y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 10);
  repp(i, 1, n + 1) {
    int temp;
    cin >> temp;
    a[i] = temp;
  }
  int ans = 0;
  repp(i, 1, n + 1) {
    cout << a[i] << " " << a[n + 1 - i] << endl;
    cout << "i:" << i  << "a[i]:" << a[i] << "a[n + 1 - i]:" << a[n + 1 - i] << endl;
    if (a[i] == i || a[n + 1 - i] == i) {
      repp(j, i + 1, n) {
        // cout << "i:" << i << " " << "j:" << j << endl;
        cout << "Ye" << "i:" << i << "j:"<< j << "a[i]:" << a[i] << "a[j]" << a[j] << endl;
        if (a[i] + a[j] == i + j) {
          cout << "in:" << i << " " << j << endl;
          ++ans;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}