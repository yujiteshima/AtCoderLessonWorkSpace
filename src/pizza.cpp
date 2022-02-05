#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<int> A(N+2);
    int ichi = 0;
    A[0] = 0;
    for (int i = 1; i <= N; ++i)
    {
        int a;
        cin >> a;
        if((ichi + a) < 360){
            A[i] = ichi + a;
            ichi = ichi + a;
        } else {
            A[i] = ichi + a - 360;
            ichi = ichi + a - 360;
        }
    }
    A[N + 1] = 360;
    sort(A.begin(), A.end());
    int ans = 0;
    for (int i = 0; i < N +1; ++i){
        int b = A[i + 1] - A[i];
        if(ans < b){
            ans = b;
        }
    }
    cout << ans << endl;
    return 0;
}