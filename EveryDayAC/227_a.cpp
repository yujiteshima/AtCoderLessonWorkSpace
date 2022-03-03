#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n, k, a;
    cin >> n >> k >> a;
    int ans = (a + k - 1) % n;
    if(ans == 0)
        ans = n;
    cout << ans << endl;
    return 0;
}