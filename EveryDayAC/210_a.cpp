#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i <= a)
        {
            sum += x;
        }
        else
        {
            sum += y;
        }
    }
    cout << sum << endl;
    return 0;
}