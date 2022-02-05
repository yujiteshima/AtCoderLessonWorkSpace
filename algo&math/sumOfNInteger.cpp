#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;
}