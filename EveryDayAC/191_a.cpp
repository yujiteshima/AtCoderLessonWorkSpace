#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int V, T, S, D;
    cin >> V >> T >> S >> D;
    
    if(V * T <= D && V * S >= D){
        cout << "No" << endl;
    }else {
        cout << "Yes" << endl;
    }
    return 0;
}