#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 20000000;
int main()
{
    // 入力を受け取る
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];
    // 線形探索
    int min_value = INF;
    for (int i = 0; i < N; ++i){
        if(a[i] < min_value) min_value = a[i];
    }

    // 結果出力
    cout << min_value << endl;
    return 0;
}