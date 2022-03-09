#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a, b;
    cin >> a >> b;
    ll mag = a - b;
    ll ans = pow(32, mag);
    //cout << ans << endl;
    cout << (int)pow(32, mag) << endl;
    return 0;
}