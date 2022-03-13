#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    //vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    cout << sum % 100 << endl;

    return 0;
}