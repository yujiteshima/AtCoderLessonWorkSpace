#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    int x = pow(10, n) - 1;
    int cnt = 0;
    for(int i = 1; i <= x; ++i){
        string S = to_string(i);
        bool flg = true;
        for (int j = 0; j < S.size(); ++j)
        {
            if (S[j] == '0')
            {
                flg = false;
            }
            if(j == S.size()){
                break;
            }
            int a = S[j] - '0';
            int b = S[j + 1] - '0';
            int div = abs(a - b);
            
            if (!(div <= 1))
            {
                flg = false;
            }
        }
        if(flg){
            cnt++;
        }
    }
    cout << cnt % 998244353 << endl;
    return 0;
}