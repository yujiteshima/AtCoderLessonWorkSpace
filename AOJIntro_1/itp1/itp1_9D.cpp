#include <bits/stdc++.h>
using namespace std;

int main () {
    string st;
    cin >> st;
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i){
        string order;
        cin >> order;
        int a, b;
        cin >> a >> b;
        string temp = st.substr(a, b - a + 1);

        if (order == "replace")
        {
            string c;
            cin >> c;
            st = st.replace(a, b - a + 1, c);
        }
        else if (order == "reverse")
        {
            reverse(temp.begin(), temp.end());
            st = st.replace(a, b - a + 1, temp);
        }
        else if (order == "print")
        {
            cout << temp << endl;
        }
    }
        return 0;
}