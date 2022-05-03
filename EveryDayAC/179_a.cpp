#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    string S;
    cin >> S;
    if(S.back() != 's'){
        S.push_back('s');
    }else{
        S += "es";
    }
    cout << S << endl;
    return 0;
}