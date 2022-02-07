#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    vector<int> a(n);
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int num = 0;
    while (true)
    {
        for (int i = 0; i < n; ++i){
            if(a[i] % 2 != 0) {
                cout << num << endl;
                return 0;
            }
            else
            {
                a[i] = a[i] / 2;
            }
        }
        num += 1;
    }
}