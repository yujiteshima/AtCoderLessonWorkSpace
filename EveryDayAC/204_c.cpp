#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using P = pair<int, int>;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> to(n);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        to[a].push_back(b);
    }
    int ans = 0;
    rep(sv, n){
        queue<int> q;
        vector<int> used(n);
        used[sv] = 1;
        ++ans;
        q.push(sv);
        while(q.size()){
            int v = q.front();
            q.pop();
            for(int u: to[v]){
                if(used[u]){
                    continue;
                }
                ++ans;
                used[u] = 1;
                q.push(u);
            }
        }
    }
    cout << ans << endl;
    return 0;
}