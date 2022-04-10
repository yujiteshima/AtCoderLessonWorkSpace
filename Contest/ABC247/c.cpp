#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int n;
    cin >> n;
    string s = "";

    for(int i = 0; i < n; ++i){
        s = s + to_string(i + 1) + s;
    }
    for (ll i = 0; i < (ll)s.size(); i++)
    {
        if(i != (ll)s.size() - 1){
        cout << s[i] << " ";
        }else {
            cout << s[i] << endl;
        }
    }
    return 0;
}