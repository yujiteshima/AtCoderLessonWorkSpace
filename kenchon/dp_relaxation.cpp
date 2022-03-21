#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

template<class T> void chmin(T& a, T b){
    if(a > b){
        a = b;
    }
}

int main()
{
    // 入力
    int N;
    cin >> N;
    vector<ll> h(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }
    //配列dpを定義(配列全体を無限大を表す値に初期化)
    vector<ll> dp(N, INF);
    //初期条件
    dp[0] = 0;
    // loop
    for (int i = 1; i < N; ++i)
    {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if(i > 1)
        {
            chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }
    // output answer
    cout << dp[N - 1] << endl;
    return 0;
}