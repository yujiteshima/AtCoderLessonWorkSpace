#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)

int main () {
  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  if(l1 <= l2){
    if(r1 <= l2){
      cout << 0 << endl;
    }else{
      cout << r1 - l2 << endl;
    }
  }else{
    if(r2 <= l1){
      cout << 0 << endl;
    }else{
      cout << r2 - l1 << endl;
    }
  }
  return 0;
}