#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    int a, b;
    cin >> a >> b;
    string sa = "";
    string sb = "";
    rep(i, b){
        sa.push_back('0' + a);
    }
    rep(i, a){
        sb.push_back('0' + b);
    }
    if(sa < sb){
        cout << sa << endl;
    }else{
        cout << sb << endl;
    }
    return 0;
}