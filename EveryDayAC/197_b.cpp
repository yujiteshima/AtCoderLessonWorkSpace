#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    vector<vector<string>> S(H, vector<string>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> S[i][j];
        }
    }
    int ans = 0;
    X -= 1;
    Y -= 1;
    // 上
    for (int i = X; i < H; i++)
    {
        if(S[i][Y] == "#"){
            break;
        }
        ans++;
    }
    
    return 0;
}