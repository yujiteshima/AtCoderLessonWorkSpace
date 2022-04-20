#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int X;
    cin >> X;
    int ans = X % 100;
    cout << 100 - ans << endl;
    return 0;
}