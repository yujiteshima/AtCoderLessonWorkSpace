#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }
    // 暫定最小値を格納する変数
    int min_value = INF;
    // bをソート
    sort(b.begin(), b.end());
    // bにINFを追加
    // これを行うことでiter = b.end()となる可能性を除外する
    b.push_back(INF);
    
    // aを固定して解く
    for (int i = 0; i < N; ++i){
        // bの中でK - a[i]以上の範囲で最小値を示すイテレータ
        auto iter = lower_bound(b.begin(), b.end(), K - a[i]);
        // イテレータの示す値を取り出す
        int val = *iter;

        // min_valueと比較する
        if(a[i]+val < min_value){
            min_value = a[i] + val;
        }
        cout << min_value << endl;
    }
        return 0;
}