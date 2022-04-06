#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    string t;
    vector<string> s(4);
    cin >> s[1] >> s[2] >> s[3] >> t;
    string ans = "";
    for (char x : t)
    {
        int a = x - '0';
        ans += s[a];
    }
    cout << ans << endl;
    return 0;
}