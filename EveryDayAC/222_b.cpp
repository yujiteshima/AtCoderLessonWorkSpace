#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < p){
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}