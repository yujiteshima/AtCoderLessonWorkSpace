#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; ++i)
    {
        string s = to_string(i);
        if(s == string(s.rbegin(), s.rend())){
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}