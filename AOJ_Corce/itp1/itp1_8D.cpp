#include <bits/stdc++.h>
using namespace std;

int main () {
    string s, p;
    cin >> s >> p;
    s.append(s);
    if(s.find(p) == string::npos){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}