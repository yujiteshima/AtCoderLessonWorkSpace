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
    int cnt = 0;
    rep(i, n)
    {
        if(s[i] == 'A'){
            if(s[i+1] == 'B'){
                if(s[i+2] == 'C'){
                    ++cnt;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}