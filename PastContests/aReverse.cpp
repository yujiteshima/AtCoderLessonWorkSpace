#include <bits/stdc++.h>
using namespace std;

int main () {
    int l, r;
    cin >> l >> r;
    string s, s1, s2, s3;
    cin >> s;
    s1 = s.substr(0, l - 1);
    s2 = s.substr(l-1, r-l+1);
    reverse(s2.begin(), s2.end());
    s3 = s.substr(r);
    cout << s1 + s2 + s3 << endl;
}