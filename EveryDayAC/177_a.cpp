#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int D, T, S;
    cin >> D >> T >> S;
    if(D <= T * S){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}