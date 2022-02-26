#include <bits/stdc++.h>
using namespace std;

int main () {
    string w;
    cin >> w;
    transform(w.begin(), w.end(), w.begin(), ::tolower);
    int ans = 0;
    while (1)
    {
        string st;
        cin >> st;
        if(st == "END_OF_TEXT"){
            break;
        }
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        if (st == w)
        {
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}