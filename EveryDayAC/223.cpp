#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    string s;
    cin >> s;
    string maxS = s;
    string minS = s;
    for (int i = 0; i < s.length(); ++i)
    {
        s = s.substr(1, s.length() - 1) + s[0];
        if(s > maxS){
            maxS = s;
        }
        if(s < minS){
            minS = s;
        }
    }
    cout << minS << endl;
    cout << maxS << endl;
    return 0;
}