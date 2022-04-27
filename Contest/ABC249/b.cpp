#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    string S;
    cin >> S;
    bool komoji = false;
    bool oomoji = false;
    string ans = "No";
    set<char> se;
    for (int i = 0; i < S.size(); i++)
    {
        if(S[i] >= 'a' && S[i] <= 'z'){
            komoji = true;
        }
        if (S[i] >= 'A' && S[i] <= 'Z')
        {
            oomoji = true;
        }
        se.insert(S[i]);
    }
    if(komoji){
        if(oomoji){
            if(S.size() == se.size()){
                ans = "Yes";
            }
        }
    }
    cout << ans << endl;
    return 0;
}