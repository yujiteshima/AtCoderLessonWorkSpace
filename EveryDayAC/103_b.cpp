#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    string s, t;
    cin >> s >> t;
    bool flg = true;
    for (int i = 0; i <= s.size(); ++i)
    {
        if(s == t){
            cout << "Yes" << endl;
            flg = false;
            break;
        }
        s = s[s.size() - 1] + s.substr(0, s.size() - 1);
    }
    if(flg){
        cout << "No" << endl;
    }
        return 0;
}