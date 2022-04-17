#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int ans = -1;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] - '0' != i )
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}