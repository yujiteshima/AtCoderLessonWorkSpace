#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
ll gcd(ll a, ll b) { return a ? gcd(b % a, a) : b; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main () {
    ll A, B;
    cin >> A >> B;
    cout << lcm(A, B) << endl;
    return 0;
}