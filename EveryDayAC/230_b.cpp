#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    string s;
    cin >> s;
    int size = s.size();
    string st = "";
    while(true){
        st += "oxx";
        if(st.size() >= size + 3){
            break;
        }
    }
    int isfind = st.find(s);
    if (isfind == string::npos)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
        return 0;
}