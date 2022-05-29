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
template<class T> void chmin(T& a, T b) { if (a > b) a = b; }
template<class T> void chmax(T& a, T b) { if (a < b) a = b; }

int main () {
  ll q;
  cin >> q;
  multiset<ll> ms;
  while(q--){
    int t;
    cin >> t;
    if(t == 1){
      int x;
      cin >> x;
      ms.insert(x);
    }else if( t == 2){
      int x, c;
      cin >> x >> c;
      while(c-- and ms.find(x) != ms.end()){
        ms.erase(ms.find(x));
      }
    }else{
      cout << *ms.rbegin() - *ms.begin() << endl;
    }
  }
  return 0;
}