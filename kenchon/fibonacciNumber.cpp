#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// fibo(N)の答えをメモ化する配列
vector<ll> memo;

int fibo(int N) {
    // BaseCase
    if(N == 0) return 0;
    else if (N == 1) return 1;
    // check memo
    if(memo[N] != -1){
        return memo[N];
    }
    // 答えをメモ化しながら再帰呼び出し
    return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main () {
    // メモ化用配列を、-1で初期化する
    memo.assign(50, -1);

    // fibo(49)を呼び出す
    fibo(49);

    // memo[0], ...., memo[49]に答えが格納されている
    for (int i = 0; i < 50; ++i){
        cout << i << "項目 : " << memo[i] << endl;
    }
        return 0;
}
