#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int func(int N){
    // 再帰関数を呼び出したことを報告
    cout << "func(" << N << ")を呼び出しました" << endl;

    // BaseCase
    if(N == 0) return 0;

    // 再帰的に答えを求めて出力する
    int result = N + func(N - 1);
    cout << N << "までの和 = " << result << endl;

    return result;
}

int main () {
    int N;
    cin >> N;
    func(N);
    return 0;
}