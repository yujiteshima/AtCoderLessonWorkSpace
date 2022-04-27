#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    vector<vector<bool>> vec;
    int n, k;
    cin >> n >> k;
    vec.resize(n, vector<bool>(26, 0));

    for (auto &x : vec)
    {
        string s;
        cin >> s;
        for (char c : s)
            x[c - 'a'] = 1;
    }

    int res = 0;
    for (int i = 1; i < 1 << n; i++)
    {
        vector<int> vec2(26, 0);
        for (int j = 0; j < n; j++)
            if (i & (1 << j))
            {
                for (int c = 0; c < 26; c++)
                    vec2[c] += vec[j][c];
            }
        int cur = count(vec2.begin(), vec2.end(), k);
        res = max(res, cur);
    }

    cout << res << endl;
    return 0;
}