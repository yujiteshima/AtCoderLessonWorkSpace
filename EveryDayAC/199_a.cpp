#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int A, B, C;
    cin >> A >> B >> C;
    if(A * A + B * B < C * C){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}