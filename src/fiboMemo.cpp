#include <iostream>
#include <vector>
using namespace std;

// memo
vector<long long> memo;

long long fibo(int N)
{
    cout << "fibo(" << N << ")を呼び出しました" << endl;
    // base case
    if(N == 0)
        return 0;
    else if(N == 1)
        return 1;

    // check memo
    if (memo[N] != -1)
        return memo[N];

    // Recursive
    return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main() {
    memo.assign(50, -1);
    fibo(49);
    for (int N = 2; N < 50; ++N){
        cout << N << "項目 = " << memo[N] << endl;
    }
}