#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    int n, y;
    cin >> n >> y;
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            // for (int k = 0; k <= n; ++k){
            int k = n - i - j;
            int total = 10000 * i + 5000 * j + 1000 * k;
            if (0 <= k)
            {
                if (i + j + k == n and total == y)
                {
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
            //}
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}