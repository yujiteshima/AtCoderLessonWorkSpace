#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    int N, K, M;
    cin >> N >> K >> M;
    int aveTat = N * M;
    vector<int> A(N);
    int myTat = 0;
    rep(i, N - 1){
        cin >> A[i];
        myTat += A[i];
    }
    if(aveTat - myTat > K){
        cout << -1 << endl;
    }
    else if (aveTat - myTat < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << aveTat - myTat << endl;
    }
    return 0;
}