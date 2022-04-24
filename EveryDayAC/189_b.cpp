#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int N, X;
    cin >> N >> X;
    int alco = 0;
    rep(i, N)
    {
        int V, P;
        cin >> V >> P;
        alco += V * P;
        if (alco > X * 100){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}