#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    string s;
    cin >> s;
    set<string> st;
    if(s[0] == s[1] and s[1] == s[2]){
        cout << 1 << endl;
    }else if (s[0] != s[1] and s[1] != s[2] and s[2] != s[0]){
        cout << 3 * 2 * 1 << endl;
    }else {
        cout << 3 << endl;
    }
        return 0;
}