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
    string s;
    cin >> n >> s;
    rep(i, s.size()){
        int tmp = s[i] - 'A';
        tmp = (tmp + n) % 26;
        char tmps = 'A' + tmp;
        cout << tmps;
    }
    cout << endl;
    return 0;
}