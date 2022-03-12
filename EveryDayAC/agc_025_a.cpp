#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 各桁の和を計算する関数
ll findSumOfDigits(ll n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main () {
    ll n;
    cin >> n;
    ll res = 1ll << 60;
    for (ll i = 1; i < n; ++i)
    {
        ll tmp = findSumOfDigits(i) + findSumOfDigits(n - i);
        res = min(res, tmp);
    }
    cout << res << endl;
    return 0;
}