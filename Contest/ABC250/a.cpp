#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    int h, w, r, c;
    cin >> h >> w >> r >> c;
    int ans = 4;
    if (r == 1){
        --ans;
    }
    if (r == h) {
        --ans;
    }
    if(c == 1){
        --ans;
    }
    if (c == w)
    {
        --ans;
    }
    cout << ans << endl;
    return 0;
}