#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, n, a) for (int i = a; i < (int)(n); i++)
int main () {
    ll N;
    cin >> N;
    unordered_set<ll> able_num;
    for (ll i = 2; i * i <= N; i++)
    {
        ll x = i * i;
        while(x <= N){
            able_num.insert(x);
            x *= i;
        }
    }
    cout << N - able_num.size() << endl;
    return 0;
}