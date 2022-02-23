#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int count = 1;
    while (true)
    {
        // check_num
        if (count % 3 == 0)
        {
            cout << " " << count;
        }
        // include3
        else if(count % 10 == 3) {
            cout << " " << count;
        }
        ++count;
        if(count > n){
            break;
        }
    }
    cout << endl;
    return 0;
}