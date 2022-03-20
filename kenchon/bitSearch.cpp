#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    // 入力受取
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];
    // bit は 2^N通りの部分集合全体を動く
    bool exist = false;
    for (int bit = 0; bit < (1 << N); ++bit){
        //cout << (1 << N) << endl; 2^Nの値が返る
        int sum = 0; // 部分集合に含まれる要素の和
        for(int i = 0; i < N; ++i){
            // i番目の要素a[i]が部分集合に含まれているかどうか
            if(bit & (1 << i)){
                sum += a[i];
            }
        }
        if(sum == W) exist = true;
    }
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}