#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<string> list(N);
    for (int i = 0; i< N; ++i){
        cin >> list[i];
    }
    map<string, int> mp;
    for(int i = 0; i < N; ++i){
        string a = list[i];
        mp[a] = 0;
    }
    for(int j = 0; j < M; ++j){
        string b;
        cin >> b;
        mp[b] = 1;
    }
    for (int i = 0; i < N; ++i){
        string c = list[i];
        if(mp[c] == 1){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
        return 0;
}