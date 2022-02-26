#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    string sign;
    if (a == b){
        sign = "==";
    }else if (a < b){
        sign = "<";
    }else if (a > b){
        sign = ">";
    }
    cout << "a" << " " << sign << " " << "b" << endl;
    return 0;
}