#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    string s, t;
    cin >> s >> t;
    string ans = "No";
    if (s == t)
    {
        ans = "Yes";
    }
    for (int i = 0; i < s.size() - 1; ++i){
        if (s[i] != t[i])
        {
            swap(s[i], s[i + 1]);
            if(s == t){
                ans = "Yes";
                break;
            }
            swap(s[i + 1], s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}