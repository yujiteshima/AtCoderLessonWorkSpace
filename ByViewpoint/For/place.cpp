#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, t, a;
    cin >> n >> t >> a;
    vector<long long> h(n);
    for (int i = 0; i < n; ++i){
        cin >> h[i];
    }
    int idx = 0;
    double min = 1e9;
    for (int i = 0; i < n; ++i) {
        double tempra = t - h[i] * 0.006;
        if(min > abs(a - tempra)){
            idx = i + 1;
            min = abs(a - tempra);
        }
    }
    cout << idx << endl;
    return 0;
}