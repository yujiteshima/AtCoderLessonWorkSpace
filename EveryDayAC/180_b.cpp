#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int N;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    ll ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans += abs(A[i]);
    }
    double ans2 = 0;
    for (int i = 0; i < N; i++)
    {
        ans2 += abs(A[i]) * abs(A[i]);
    }
    ans2 = sqrt(ans2);
    ll ans3 = -100000000;
    for (int i = 0; i < N; i++)
    {
        ans3 = max(ans3, abs(A[i]));
    }
    cout << ans << endl;
    cout << fixed << setprecision(15) << ans2 << endl;
    cout << ans3 << endl;
    return 0;
}