#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        string s = to_string(i);
        int sum = 0;
        for (int j = 0; j < s.size(); ++j)
        {
            sum += s[j] - '0';
        }
        if(a <= sum and b <= sum ){
            ans += stoi(s);
        }
    }
    cout << ans << endl;
    return 0;
}