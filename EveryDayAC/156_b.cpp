#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ll n, k;
    cin >> n >> k;
    //string st = "";
    int ans = 0;
    while (0 < n)
    {
        n /= k;
        ans++;
    }
    // if(k == 10){
    //     st = to_string(n);
    //     cout << st.size() << endl;
    //     return 0;
    // }
    // while (n >= k - 1)
    // {
    //     if(n % k == 0){
    //         st = "0" + st;
    //     }
    //     if (n % k == 1)
    //     {
    //         st = "1" + st;
    //     }
    //     if(n % k == 2){
    //         st = "2" + st;
    //     }
    //     if (n % k == 3)
    //     {
    //         st = "3" + st;
    //     }
    //     if (n % k == 4)
    //     {
    //         st = "4" + st;
    //     }
    //     if (n % k == 5)
    //     {
    //         st = "5" + st;
    //     }
    //     if (n % k == 6)
    //     {
    //         st = "6" + st;
    //     }
    //     if (n % k == 7)
    //     {
    //         st = "7" + st;
    //     }
    //     if (n % k == 8)
    //     {
    //         st = "8" + st;
    //     }
    //     if (n % k == 9)
    //     {
    //         st = "9" + st;
    //     }
    //     n = n / k;
    // }
    //cout << st.size() << endl;
    cout << ans << endl;
    return 0;
}