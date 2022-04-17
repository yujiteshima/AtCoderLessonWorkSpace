#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    ll a, b, k;
    cin >> a >> b >> k;
    int ans = 0;

    while (true)
    {
        if(a >= b){
            break;
        }
        a *= k;
        ++ans;
    }

    cout << ans << endl;
    return 0;
}