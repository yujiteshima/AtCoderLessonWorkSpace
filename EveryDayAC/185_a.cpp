#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    vector<int> A(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    cout << A[0] << endl;
    return 0;
}