#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int k, s;
    cin >> k >> s;
    int ans = 0;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            int z = s - x - y;
            if (0 <= z && z <= k)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}