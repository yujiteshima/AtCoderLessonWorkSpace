#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    string c;
    cin >> c;
    if (c[0] == c[1] && c[1] == c[2])
    {
        cout << "Won" << endl;
    }
    else
    {
        cout << "Lost" << endl;
    }
    return 0;
}