#include <bits/stdc++.h>
using namespace std;

int main () {
    while(1){
        string st;
        cin >> st;
        if(st == "-"){
            break;
        }
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int h;
            cin >> h;
            string temp = st.substr(h, st.size() - h);
            string temp2 = st.substr(0, h);
            st = temp + temp2;
        }
        cout << st << endl;
    }
    return 0;
}