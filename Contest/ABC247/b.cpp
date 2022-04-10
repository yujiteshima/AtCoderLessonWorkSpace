#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> t[i];
        if(m.count(s[i]) == 0){
            m[s[i]] = 1;
        }else{
            m[s[i]] += 1;
        }
        if (m.count(t[i]) == 0)
        {
            m[t[i]] = 1;
        }
        else
        {
            m[t[i]] += 1;
        }
    }
    for (const auto &item : m)
    {
        if (item.second > 1)
        {
            for (int i = 0; i < n; i++)
            {
                if(item.second > 1) {
                    if(s[i] == t[i]){
                        s[i] = "";
                        break;
                    }
                }
                if (s[i] == item.first)
                {
                    s[i] = "";
                }
                if(t[i] == item.first){
                    t[i] = "";
                }
            }
        }
    }
    string ans = "Yes";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == "" && t[i] == "")
        {
            ans = "No";
        }
    }
    cout << ans << endl;
    return 0;
}