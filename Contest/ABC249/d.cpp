#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    map<int, ll> ma;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        ma[x]++;
    }
    ll res = 0;
    for (int i = 1; i <= 2000010; i++){
        for (int j = i; j <= 200010; j += i){
            res += ma[i] * ma[j] * ma[j / i];
        }
    }
    cout << res << endl;
    return 0;
}