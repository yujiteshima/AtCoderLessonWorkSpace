#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    sort(l.begin(), l.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < k; ++i)
    {
        sum += l[i];
    }
    cout << sum << endl;
    return 0;
}