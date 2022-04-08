#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    string s;
    cin >> s;
    s = s.substr(1, 2) + s[0];
    cout << s << endl;
    return 0;
}