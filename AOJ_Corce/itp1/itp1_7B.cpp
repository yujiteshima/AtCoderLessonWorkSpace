#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        int n, x;
        cin >> n >> x;
        if (n == 0 and x == 0)
        {
            break;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                for (int k = j + 1; k <= n; k++)
                {
                    if (i + j + k == x)
                    {
                        ++cnt;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}