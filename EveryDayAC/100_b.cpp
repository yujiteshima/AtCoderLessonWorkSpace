#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int func(int x){
    if(x % 100 !=0){
        return 0;
    }
    return func(x / 100) + 1;
}

int main () {
    int d, n;
    cin >> d >> n;
    int cnt = 0;
    for (int x = 1;; x++)
    {
        if(func(x) == d){
            cnt++;
            if(cnt == n){
                cout << x << endl;
                return 0;
            }
        }
    }
        return 0;
}