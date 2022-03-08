#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    sort(d.begin(), d.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(i == 0 or d[i-1] < d[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}