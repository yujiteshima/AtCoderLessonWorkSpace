#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int n, k;
    cin >> n >> k;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            sum += i * 100 + j;
        }
    }
    cout << sum << endl;
    return 0;
}