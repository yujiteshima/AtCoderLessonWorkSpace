#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m, l;
    cin >> n >> m >> l;
    vector<vector<long long>> a(n, vector<long long>(m));
    vector<vector<long long>> b(m, vector<long long>(l));
    vector<vector<long long>> c(n, vector<long long>(l));
    //long long int a[100][100] = {}, b[100][100] = {}, c[100][100] = {};
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i){
        for(int j =  0; j < l; ++j){
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; ++i){
        for(int j = 0; j < l; ++j){
            for (int k = 0; k < m; ++k){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < l; ++j){
            if(j){
                cout << " ";
            }
            cout << c[i][j];
        }
        cout << endl;
    }
        return 0;
}