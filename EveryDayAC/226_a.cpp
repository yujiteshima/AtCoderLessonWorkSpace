#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    double x;
    cin >> x;
    int a = floor(x);
    if(x - a >= 0.5){
        cout << a + 1 << endl;
    } else {
        cout << a << endl;
    }
    return 0;
}