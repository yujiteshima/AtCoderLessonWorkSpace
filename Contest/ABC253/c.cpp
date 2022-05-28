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

int main() {
  ll q;
  cin >> q;
  vector<ll> vec(1000000010);
  stack<ll> max;
  max.push(0);
  stack<ll> min;
  min.push(1000000010);
  rep(i, q) {
    int kind;
    cin >> kind;
    if (kind == 1) {
      // case 1
      ll x;
      cin >> x;
      vec[x] += 1;
      ll m = max.top();
      if (x > m) {
        max.push(x);
      }
      ll mi = min.top();

      if (x < mi){
        min.push(x);
      }
      } else if (kind == 2) {
      // case 2
      ll x, c;
      cin >> x >> c;
        if(vec[x] - c > 0){
          vec[x] -= c;
        }else{
          vec[x] = 0;
          if(x == max.top()){
            max.pop();
          }
          if(x == min.top()){
            min.pop();
          }
        }

      } else {
        // case 3
        cout << max.top() - min.top() << endl;
      }
  }
  return 0;
}