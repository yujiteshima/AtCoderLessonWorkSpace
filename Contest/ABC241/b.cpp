#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }
    for (int i = 0; i < m; ++i)
    {
        bool flg = false;
        for (int j = 0; j < n; ++j)
        {
            if(a[j] == b[i]){
                a[j] = 0;
                flg = true;
                break;
            }
        }
        if(!flg){
            cout << "No" << endl;
            return 0;
        }
    }
        cout << "Yes" << endl;
    return 0;
}