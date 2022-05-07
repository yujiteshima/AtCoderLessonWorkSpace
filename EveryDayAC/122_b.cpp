#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    int tmp = 0;
    rep(i, s.size())
    {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
        {
            ++tmp;
        }
        else
        {
            if (ans < tmp)
            {
                ans = tmp;
                tmp = 0;
            }
        }
    }
    if (ans < tmp)
    {
        ans = tmp;
        tmp = 0;
    }
    cout << ans << endl;
    return 0;
}