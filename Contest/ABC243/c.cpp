#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int N;
    cin >> N;
    map<int, vector<pair<int, char>>> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < N; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    string s;
    cin >> s;
    for (int i = 0; i < N; ++i){
        m[v[i].second].push_back({v[i].first, s[i]});
    }
    int f = 0;
    for(auto it: m){
        int l = 0, r = 0;
        vector<pair<int, char>> a = it.second;
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); ++i){
            if(a[i].second=='L' and r == 1) {
                f = 1;
            }
            if(a[i].second== 'R'){
                r = 1;
            }
        }
    }
    if(f){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

// int main () {
//     int N;
//     cin >> N;
//     vector<int> X(N);
//     vector<int> Y(N);
//     set<int> se;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> X[i];
//         cin >> Y[i];
//         se.insert(Y[i]);
//     }

//     string lr = "";
//     cin >> lr;
//     map < int, vector<int, int>>;
//     for (int i = 0; i < N; i++)
//     {
//         for(auto d: se){

//         }
//     }
//         return 0;
// }