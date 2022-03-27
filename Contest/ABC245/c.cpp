#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    bool isOk = true;
    for (int i = 0; i < n-1; i++)
    {
        if(!(abs(a[i]-a[i+1]) <= k || abs(a[i]-b[i+1]) <= k || abs(b[i] - b[i+1]) <= k || abs(b[i] - a[i+1]) <= k)){
            isOk = false;
        }
    }
    if(n == 1){
        isOk = true;
        // if(a[0] == 0 || b[0] == 0){
        //     isOk = true;
        // }else {
        //     isOk = false;
        // }
    }
    if(isOk){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}