#include <bits/stdc++.h>
using namespace std;

int main () {
    while(true){
        int a, b;
        cin >> a >> b;
        if(a == 0 and b == 0){
            break;
        }
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}