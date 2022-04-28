#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    string a, b;
    cin >> a >> b;
    int sumA = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        sumA += a[i] - '0';
    }
    int sumB = 0;
    for (int i = 0; i < b.size(); ++i)
    {
        sumB += b[i] - '0';
    }
    if(sumA < sumB){
        cout << sumB << endl;
    } else {
        cout << sumA << endl;
    }
    return 0;
}