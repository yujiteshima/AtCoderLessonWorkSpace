#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    set<ll> se;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            se.insert(4 * i * j + 3 * i + 3 * j);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(se.find(s[i]) == se.end()){
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}