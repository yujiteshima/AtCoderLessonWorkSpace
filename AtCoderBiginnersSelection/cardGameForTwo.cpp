#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int Alice = 0;
    int Bob = 0;
    for (int i = 1; i <= n; i++)
    {
       if(i % 2 != 0){
           Alice += a[i-1];
       } else {
           Bob += a[i-1];
       }
    }
    cout << Alice - Bob << endl;
    return 0;
}