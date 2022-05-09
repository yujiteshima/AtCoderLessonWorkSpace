#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int fn(int a, int b){
    int ret = 0;
    string s1 = to_string(a);
    string s2 = to_string(b);
    if(s1.size() > s2.size()){
        ret = s1.size();
    }else{
        ret = s2.size();
    }
    return ret;
}

int main () {
    int n;
    cin >> n;
    int a = sqrt(n);
    int ans = fn(a, a + 1);
    cout << ans << endl;
    return 0;
}