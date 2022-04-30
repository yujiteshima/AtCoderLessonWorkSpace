#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int fn(int a, int b, int c, int d){
    return a * d - b * c;
}

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fn(a, b, c, d) << endl;
    return 0;
}