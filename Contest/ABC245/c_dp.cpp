#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    // 入力
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N), B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    // dp
    vector<bool> dpA(N, false), dpB(N, false);
    dpA[0] = dpB[0] = true;
    for (int w = 0; w < N - 1; ++w){
        // A の w番目まで到達できる時さらに伸ばす
        if(dpA[w]){
            if(abs(A[w] - A[w+1]) <= K){
                dpA[w + 1] = true;
            }
            if(abs(A[w] - B[w+1]) <= K){
                dpB[w + 1] = true;
            }
        }
        // B の w番目まで到達できる時さらに伸ばす
        if(dpB[w]){
            if(abs(B[w]-A[w+1]) <= K){
                dpA[w + 1] = true;
            }
            if(abs(B[w] - B[w+1]) <= K){
                dpB[w + 1] = true;
            }
        }
    }
    // A. BのどちらかのN-1番目まで到達できればYes
    if(dpA[N-1] || dpB[N-1])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}