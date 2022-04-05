#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
// グラフ構造体
using Graph = vector<vector<int>>;
// DFS
void rec(const Graph &G, int v, int p = -1){
    // 行きがけ順の頂点出力
    cout << v + 1 << " ";
    for(int ch: G[v]){
        // 親へは遡らない
        if(ch == p)
            continue;
        
        // 再帰的に
        rec(G, ch, v);

        // 戻ってきたらまた出力
        cout << v + 1 << " ";
    }
}

int main()
{
    // 入力
    int N;
    cin >> N;
    Graph G(N);
    for (int i = 0; i < N - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 各頂点の隣接頂点を番号が小さい順に
    for (int i = 0; i < N; i++)
    {
        sort(G[i].begin(), G[i].end());
    }
    // DFS
    rec(G, 0);
    cout << endl;
    return 0;
}