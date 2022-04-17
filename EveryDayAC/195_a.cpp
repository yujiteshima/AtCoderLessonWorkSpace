#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int m, h;
    cin >> m >> h;
    string ans = "No";
    if (h % m == 0)
    {
        ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}