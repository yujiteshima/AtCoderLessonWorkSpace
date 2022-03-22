#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main()
{
    int N;
    cin >> N;
    vector<ll> h(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> h[i];
    }
    vector<ll> dp(N, INF);
    dp[0] = 0;
    for (int i = 1; i < N; ++i)
    {
        if (i == 1)
        {
            dp[i] = abs(h[i] - h[i - 1]);
        }
        else
        {
            dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }
    cout << dp[N - 1] << endl;
    return 0;
}
