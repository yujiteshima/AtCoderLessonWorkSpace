#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> S(h);
    rep(i, h) cin >> S[i];

    int ans = 0;
    // 上
    for (int i = x-1; i >= 0; i--)
    {
        if(S[i][y] == '#'){
            break;
        }
        ans++;
    }
    // 下
    for (int i = x - 1; i < h; i++) {
      if (S[i][y] == '#') {
        break;
      }
      ans++;
    }
    // 左
    for (int i = y - 1; i >= 0; i--){
        if(S[x][i] == '#') {
          break;
        }
        ans++;
    }
    // 右
    for (int i = y - 1; i < w; i++) {
      if (S[x][i] == '#') {
        break;
      }
      ans++;
    }
    cout << ans << endl;
    return 0;
}