#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a, b;
    a = n / 4;
    b = n / 7;
    string res = "No";
    for (int i = 0; i <= a; i++)
    {
        bool flg = false;
        for (int j = 0; j <= b; j++)
        {
            if(i*4 + j*7 == n){
                res = "Yes";
                flg = true;
                break;
            }
        }
        if(flg){
            break;
        }
    }
    cout << res << endl;
    return 0;
}