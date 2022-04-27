#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int A, B, C;
    cin >> A >> B >> C;
    string teban = "Takahashi";
    if (C != 0)
    {
        teban = "Aoki";
    }
    while(true){
        if (teban == "Takahashi")
        {
            --A;
            teban = "Aoki";
            if(A < 0){
                break;
            }
        }
        else
        {
            --B;
            teban = "Takahashi";
            if (B < 0)
            {
                break;
            }
        }
    }
    cout << teban << endl;
    return 0;
}