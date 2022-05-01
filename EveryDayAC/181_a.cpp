#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int N;
    cin >> N;
    if(N % 2 != 0){
        cout << "Black" << endl;
    }else {
        cout << "White" << endl;
    }
    return 0;
}