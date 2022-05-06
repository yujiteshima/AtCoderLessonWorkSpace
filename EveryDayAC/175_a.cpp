#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    string s;
    cin >> s;
    if(s == "RRR"){
        cout << 3 << endl;
    }
    else if (s == "RRS" || s == "SRR")
    {
        cout << 2 << endl;
    }
    else if (s == "RSS" || s == "SRS" || s == "SSR" || s == "RSR")
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}