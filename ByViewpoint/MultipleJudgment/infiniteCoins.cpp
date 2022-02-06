#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, a;
    cin >> n >> a;
    int reqNum = n % 500;
    if(reqNum <= a) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}