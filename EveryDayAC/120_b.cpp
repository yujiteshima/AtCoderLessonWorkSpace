#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

vector<int> divisorList(int N)
{
    vector<int> divisor;
    int i = 1;
    while (i * i <= N)
    {
        if (N % i == 0)
        {
            divisor.push_back(i);
            if (i != N / i)
            {
                divisor.push_back(N / i);
            }
        }
        ++i;
    }
    sort(divisor.begin(), divisor.end());
    return divisor;
}

int main () {
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> A = divisorList(a);
    vector<int> B = divisorList(b);
    vector<int> C;
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C));
    sort(C.rbegin(), C.rend());
    cout << C[k - 1] << endl;
    return 0;
}