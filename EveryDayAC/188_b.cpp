#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int N;
    cin >> N;
    vector<int> A(N), B(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i] * B[i];
    }
    if(sum == 0){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}