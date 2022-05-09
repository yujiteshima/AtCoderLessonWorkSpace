#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
  int a = 10;
  rep(i, 3){
    string tmp = "";
    cin >> tmp;
    if(tmp == "ABC"){
      a -= 1;
    }else if(tmp == "ARC"){
      a -= 2;
    }else if(tmp == "AGC"){
      a -= 3;
    }else if(tmp == "AHC"){
      a -= 4;
    }
  }
  if(a == 1){
    cout << "ABC" << endl;
  }else if(a == 2){
    cout << "ARC" << endl;
  }else if(a == 3){
    cout << "AGC" << endl;
  }else if(a == 4){
    cout << "AHC" << endl;
  }
  return 0;
}