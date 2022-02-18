#include <bits/stdc++.h>
using namespace std;

int ctoi(char c){
    if(c >= '0' && c <= '9'){
        return c - '0';
    }
    return 0;
}

int main () {
    string s;
    cin >> s;
    int a, b;
    // a = int(s[0] - '0');
    // b = int(s[2] - '0');
    a = ctoi(s[0]);
    b = ctoi(s[2]);
    cout << a * b << endl;
    return 0;
}