#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

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

int main()
{
    int n;
    cin >> n;
    vector<int> vec = divisorList(n);
    for (int x : vec)
    {
        cout << x << " ";
    }
    return 0;
}