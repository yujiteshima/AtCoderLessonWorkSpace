#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    sort(l.begin(), l.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                if(l[j] != l[k] && l[i] != l[j] && l[j] + l[k] > l[i]) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}