#include <bits/stdc++.h>
using namespace std;


int main () {
    int n, x;
    cin >> n >> x;
    int A[n][2];
    for (int i = 0; i < n; ++i){
        cin >> A[i][0] >> A[i][1];
    }
    set<int> st = {0};
    set<int> sttmp;
    for (int i = n; i > 0; --i)
    {
        sttmp.clear();
        for (auto kk : st)
        {
            sttmp.insert(A[i - 1][0] + kk);
            sttmp.insert(A[i - 1][1] + kk);
        }
        st.clear();
        st = sttmp;
    }
    bool flg = false;
    for (auto ii : st)
    {
        if(ii == x){
            flg = true;
            break;
        }
    }
    if(flg){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
        return 0;
}