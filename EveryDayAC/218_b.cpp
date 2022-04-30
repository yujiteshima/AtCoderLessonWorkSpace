#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    vector<int> P(26);
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
        int tmp;
        cin >> tmp;
        cout << alpha[tmp - 1];
    }
    cout << endl;
    return 0;
}