#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 3の倍数を作るために必要な最小の消す桁数
// 言い換えれば
// 全桁の足し算が3の倍数になるように必要な最小の桁数

int main () {
    int N;
    cin >> N;
    // Nを3で割った余りで分類する
    // ①Nを3で割った余が0のケース
    // これは何も消さなくて良い。
    if(N % 3 == 0){
        cout << 0 << endl;
    }
    // ①Nを3で割った余が1のケース
    // この場合余が１の桁が存在するかしないかでさらに分類する
    return 0;
}