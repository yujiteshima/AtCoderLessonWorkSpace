#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int kto10 (string s, ll k){
    ll ans = 0;
    for(char x: s){
        ans *= k;
        ans += x - '0';
    }
    return ans;
}

int main () {
    ll k;
    string a, b;
    cin >> k >> a >> b;
    ll A = kto10(a, k);
    ll B = kto10(b, k);
    cout << A * B << endl;
    return 0;
}