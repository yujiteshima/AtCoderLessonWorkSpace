#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int N, S, D;
    cin >> N >> S >> D;
    string ans = "No";
    for (int i = 0; i < N; i++)
    {
        ll X, Y;
        cin >> X >> Y;
        if(X < S && Y > D){
            ans = "Yes";
        }
    }
    cout << ans << endl;
    return 0;
}