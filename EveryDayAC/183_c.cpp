#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N, K;
    cin >> N >> K;
    vector<vector<int>> T(N, vector<int>(N));
    rep(i, N) rep(j, N) {
        cin >> T[i][j];
    }
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cin >> T[i][j];
    //     }
    // }
    vector<int> index;
    for (int i = 1; i < N; i++)
    {
        index.push_back(i);
        // cout << index[i] << endl;
    }
    int ans = 0;
    do
    {
        int time = T[0][index[0]];
        rep(i, N-2){
            time += T[index[i]][index[i + 1]];
        }
        time += T[index.back()][0];
        // cout << time << endl;
        // int now_city = index[0];
        // for (int i = 0; i < N - 2; i++)
        // {
        //     int to_city = index[i];
        //     time += T[now_city][to_city];
        //     now_city = to_city;
        // }
        // time += T[now_city][0];
        // //cout << time << endl;
        if (time == K)
        {
            ++ans;
        }
    } while (next_permutation(index.begin(), index.end()));
    cout << ans << endl;
    return 0;
}