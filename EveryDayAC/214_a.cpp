#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int N;
    cin >> N;
    if(N <= 125){
        cout << 4 << endl;
    }else if(N <= 211){
        cout << 6 << endl;
    }else if(N <= 214){
        cout << 8 << endl;
    }
    return 0;
}