#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int n, k, x;
    cin >> n >> k >> x;
    vector<ll> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A.rbegin(), A.rend());

    int i = 0;
    while (true)
    {
        if(!(i < n)){
            break;
        }
        if(k == 0){
            break;
        }
        if(A[i] > x){
            A[i] = A[i] - x;
            --k;
        }
        else
        {
            ++i;
        }
    }
    
    sort(A.rbegin(), A.rend());
    if(k != 0){
        for (int i = 0; i < n; i++)
        {
            A[i] = 0;
            --k;
            if (k == 0)
            {
                break;
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += A[i];
    }
    cout << ans << endl;
    return 0;
}