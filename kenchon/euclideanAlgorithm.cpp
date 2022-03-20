#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int GCD(int m, int n){
    // BaseCase
    if(n == 0) return m;

    // 再帰呼び出し
    return GCD(n, m % n);
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << endl;
    cout << GCD(b, a) << endl;
    return 0;
}