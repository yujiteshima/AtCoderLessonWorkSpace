#include <bits/stdc++.h>
using namespace std;
int N, M, A[100009], B[100009];
vector<int> G[100009];
bool visited[100009]; // visited[pos]=falseの時頂点xが白色, trueの時灰色

void dfs(int pos){
    visited[pos] = true;
    for(int i : G[pos]){
        if(visited[i] == false){
            dfs(i);
        }
    }
}
int main () {
    cin >> N >> M;
    for (int i = 1; i <= M; i++){
        cin >> A[i] >> B[i];
    }
        return 0;
}