#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

// vector<ll> divisorList(ll N)
// {
//     vector<ll> divisor;
//     int i = 1;
//     while (i * i <= N)
//     {
//         if (N % i == 0)
//         {
//             divisor.push_back(i);
//             if (i != N / i)
//             {
//                 divisor.push_back(N / i);
//             }
//         }
//         ++i;
//     }
//     sort(divisor.begin(), divisor.end());
//     return divisor;
// }

int main () {
    ll n;
    cin >> n;
    //vector<ll> vec = divisorList(n);
    set<ll> ans;
    for (ll i = 1; i * i <= n; ++i){
        if(n % i == 0){
            ans.insert(i);
            ans.insert(n / i);
        }
    }
        for (auto x : ans)
        {
            cout << x << endl;
        }
    return 0;
}