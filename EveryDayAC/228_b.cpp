#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n, x;
    cin >> n >> x;
    vector<int> a(100009);
    vector<bool> b(100009);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int i = x;
    do{
        b[i] = true;
        i = a[i];
    } while (!b[i]);
    // ll ans = 1;
    // while(true){
    //     int temp = x;
    //     if (a[x] == -1)
    //     {
    //         break;
    //     }
    //     x = a[x];
    //     a[temp] = -1;
    //     ++ans;
    // }
    int ans = 0;
    for (int i = 1; i <= n; ++i){
        if(b[i]){
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}