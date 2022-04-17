#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int N;
    cin >> N;
    vector<vector<ll>> vec(N + 10, vector<ll>(N + 10));
    for (int i = 1; i <= N; i++)
    {
        ll temp;
        cin >> temp;
        vec[i] = vec[i - 1];
        vec[i][temp] += 1;
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i)
    {
        int L, R, X;
        cin >> L >> R >> X;
        cout << vec[R][X] - vec[L -1][X] << endl;
    }

    return 0;
}