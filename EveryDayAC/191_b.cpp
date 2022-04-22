#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    ll N, X;
    cin >> N >> X;
    vector<ll> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    vector<ll> ans;
    for (int i = 0; i < N; i++)
    {
        if(A[i] != X){
            ans.push_back(A[i]);
        }
    }
    if(ans.size() > 0){
    cout << ans[0];
    }
    for (int i = 1; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }
    return 0;
}