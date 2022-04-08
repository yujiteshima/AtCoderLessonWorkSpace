#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int n;
    cin >> n;
    int ans = 0;
    if(n >= 2){
        ans = n - 1;
    }
    cout << ans << endl;
    return 0;
}