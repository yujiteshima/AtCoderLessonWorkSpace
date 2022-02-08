#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int ans = 2;
    while (true)
    {
        if(ans * 2 > n) {
            break;
        }
        ans = ans * 2;
    }
    cout << ans << endl;
    return 0;
}