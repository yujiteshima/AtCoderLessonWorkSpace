#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int a, b;
    cin >> a >> b;
    if(abs(a - b) < 3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}