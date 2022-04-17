#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main()
{
    ll MOD = 998244353;
    int N, M, K;
    std::cin >> N >> M >> K;

    std::vector<ll> dp(K + 1, 0);
    dp[0] = 1;

    for (int n = 0; n < N; n++)
    {
        std::vector<ll> next(K + 1, 0);

        for (int k = 0; k <= K; k++)
        {
            for (int m = 1; m <= M; m++)
            {
                if (k + m >= K + 1)
                {
                    break;
                }
                next[k + m] = (next[k + m] + dp[k]) % MOD;
            }
        }
        dp = next;
    }

    ll ans = 0;
    for (auto &val : dp)
    {
        ans += val;
    }

    std::cout << ans % MOD << std::endl;
}