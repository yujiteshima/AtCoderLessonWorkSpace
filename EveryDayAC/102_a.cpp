#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ll n;
    cin >> n;
    if(n % 2 == 0){
        cout << n << endl;
    } else {
        cout << 2 * n << endl;
    }
    return 0;
}