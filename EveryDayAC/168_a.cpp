#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007;  // mod(10^9 + 7)

int main() {
  string n;
  cin >> n;
  if (n.back() == '2' || n.back() == '4' || n.back() == '5' ||
      n.back() == '7' || n.back() == '9') {
    cout << "hon" << endl;
  } else if (n.back() == '0' || n.back() == '1' || n.back() == '6' ||
             n.back() == '8') {
    cout << "pon" << endl;
  } else if (n.back() == '3') {
    cout << "bon" << endl;
  }
  return 0;
}