#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    string f = "";
    char m = '#';
    rep(i, n){
        if (m == '.')
        {
            m = '#';
        }
        else
        {
            m = '.';
        }
        rep(j, b){
            f.push_back(m);
        }
    }
    m = '.';
    string s = "";
    rep(i, n)
    {
        if (m == '.')
        {
            m = '#';
        }
        else
        {
            m = '.';
        }
        rep(j, b)
        {
            s.push_back(m);
        }
    }
    // cout << f << endl;
    // cout << s << endl;
    rep(i, n){
        rep(j, a){
            if((i+1) % 2 != 0){
                cout << f << endl;
            }else{
                cout << s << endl;
            }
        }
    }

    return 0;
}