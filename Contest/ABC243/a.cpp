#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int v, a, b, c;
    cin >> v >> a >> b >> c;
    int cnt = 1;
    while (true)
    {
        if(cnt % 3 == 1){
            v -= a;
        } else if ( cnt % 3 == 2){
            v -= b;
        } else if (cnt % 3 == 0){
            v -= c;
        }

        if(v < 0){
            if (cnt % 3 == 1)
            {
                cout << 'F' << endl;
                return 0;
            }
            else if (cnt % 3 == 2)
            {
                cout << 'M' << endl;
                return 0;
            }
            else if (cnt % 3 == 0)
            {
                cout << 'T' << endl;
                return 0;
            }
        }
        ++cnt;
    }
        return 0;
}